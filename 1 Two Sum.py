class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        d = {}
        for i, n in enumerate(nums):
            if n in d:
                return [i, d[n]]
            else:
                d[target - n] = i 
        return [0, 0]