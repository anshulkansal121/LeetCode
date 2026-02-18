class Solution:
    def findDuplicate(self, nums: List[int]) -> int:
        boolean = [0] * len(nums)
        for i in nums:
            if boolean[i] == 1:
                return i
            else:
                boolean[i] = 1
        return -1