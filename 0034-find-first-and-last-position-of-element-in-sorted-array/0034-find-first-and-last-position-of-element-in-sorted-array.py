class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        first = -1
        last = -1
        for i in range(0,len(nums)):
            if(nums[i] == target and first == -1):
                first = i
                break
        for j in range(len(nums)-1, -1,-1):
            if(nums[j]==target and last == -1):
                last = j
                break
        return [first,last]
