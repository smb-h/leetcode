class Solution:
    def romanToInt(self, s: str) -> int:
        symbols = ["I", "V", "X", "L", "C", "D", "M"]
        values = [1, 5, 10, 50, 100, 500, 1000]
        num = 0
        stash = 0
        for i in range(len(s)):
            this_val = values[symbols.index(s[i])]
            if (stash != 0):
                if this_val > stash:
                    num += (this_val - stash)
                    stash = 0
                    continue
                if this_val == stash:
                    num += stash
                    stash = this_val
                    continue
                if this_val < stash:
                    num += stash
                    stash = this_val
                    continue
            else:
                stash = this_val
        num += stash
        return num

solution = Solution()
print(solution.romanToInt("III"))
print(solution.romanToInt("LVIII"))
print(solution.romanToInt("MCMXCIV"))
