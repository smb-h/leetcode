from typing import List


class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        if "" in strs:
            return ""
        if len(strs) == 1:
            return strs[0]

        strs = sorted(strs, key=len)
        common_prefix = strs[0]

        for item in strs:
            if item == common_prefix:
                continue
            while not item.startswith(common_prefix):
                common_prefix = common_prefix[:-1]

        return common_prefix


solution = Solution()
print(solution.longestCommonPrefix(["flower", "flow", "flight"]))
print(solution.longestCommonPrefix(["dog", "racecar", "car"]))
