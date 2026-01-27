class Solution:
    def nextPermutation(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        # [1,1,5]
        # iterate from the back find the element Where nums[i] < nums[i+1]
        # swap nums[i] with next greater element
        # sort the remaining array i.e. i+1 -> n

        i = len(nums) - 2
        j = len(nums) - 1
        while(i > -1 and nums[i] >= nums[i+1]):
            i-= 1
        if(i<0):
            nums.reverse()
        else:
            while(nums[i] >= nums[j]):
                j-=1
            nums[i],nums[j] = nums[j], nums[i]
            nums[i+1:] = nums[i+1:][::-1]
        
        
        