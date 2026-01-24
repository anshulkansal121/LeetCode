class Solution:
    def sortColors(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        count = {0:0,1:0,2:0}
        j=0
        for i in nums:
            count[i]+=1
        for key,value in count.items():
            while(value):
                nums[j] = key
                value-=1
                j+=1
        