class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        count = 0
        ele = None
        for i in nums:
            if(i!=ele):
                if(count<=1):
                    count = 1
                    ele = i
                else:
                    count-=1
            else:
                count+=1
        return ele