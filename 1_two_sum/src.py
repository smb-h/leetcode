from typing import List


class Solution:
    @staticmethod
    def two_sum(nums: List[int], target: int) -> List[int]:
        hash_map = {}
        for i in range(len(nums)):
            x = target - nums[i]
            if x in hash_map:
                return [hash_map[x], i]
            hash_map[nums[i]] = i
        return []


solution = Solution()
print(solution.two_sum([2, 7, 11, 15], 9))
print(solution.two_sum([3, 2, 4], 6))
print(solution.two_sum([3, 3], 6))
