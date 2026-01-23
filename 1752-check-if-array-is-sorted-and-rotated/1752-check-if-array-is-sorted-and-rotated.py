class Solution:
    def check(self, nums: List[int]) -> bool:
        # Approach Peek and valley : if my arrray is sorted and rotted then there must be 1 valley or no valley in the array to satisfy the condition
        valley = 0
        for i in range(len(nums)):
            if nums[i] > nums[(i+1)%(len(nums))]:
                valley+=1
                if valley > 1:
                    return False
        return True
        