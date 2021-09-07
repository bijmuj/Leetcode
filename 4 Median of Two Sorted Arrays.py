class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        nums = nums1 + nums2
        nums = sorted(nums)
        
        l = len(nums)
        if l==1:
            return nums[0]
        elif l % 2:
            return nums[l//2]
        else:
            return (nums[l//2 - 1] + nums[l//2])/2