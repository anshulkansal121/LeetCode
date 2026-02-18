class Solution:
    def findPeakElement(self, nums: List[int]) -> int:
        i=0
        for i in range(0,len(nums)-1):
            if nums[i] > nums[i+1]:
                return i
        return len(nums)-1