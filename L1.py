# 1. Two Sum

class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        minus = dict()

        for i in range(len(nums)):
            if( (target - nums[i]) in minus):
                return [i, minus[target-nums[i]]]
            else:
                minus[nums[i]] = i