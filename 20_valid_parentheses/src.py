class Solution:
    def isValid(self, s: str) -> bool:
        data = {")": "(", "}": "{", "]": "["}
        stack = []
        for i in s:
            if not stack:
                stack.append(i)
                continue
            if i in data.keys():
                if stack[-1] == data[i]:
                    stack.pop()
                    continue
                else:
                    stack.append(i)
            else:
                stack.append(i)
        return not bool(stack)


solution = Solution()
print(solution.isValid("()"))
print(solution.isValid("()[]{}"))
print(solution.isValid("(]"))
print(solution.isValid("(])"))
print(solution.isValid("{[]}"))
