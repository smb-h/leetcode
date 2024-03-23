class Solution:
    @staticmethod
    def isPalindrome(self, x: int) -> bool:
        return True if str(x)[::-1] == str(x) else False


solution = Solution()
print(solution.isPalindrome(121))
print(solution.isPalindrome(-121))
print(solution.isPalindrome(10))
