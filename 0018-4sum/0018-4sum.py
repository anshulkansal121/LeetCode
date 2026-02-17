class Solution:
    def fourSum(self, nums: List[int], target: int) -> List[List[int]]:
        nums.sort()
        result = []
        for i in range(len(nums)-3):
            if i>0 and nums[i] == nums[i-1]:
                continue
            for j in range(i+1,len(nums)-2):
                if j>i+1 and nums[j] == nums[j-1]:
                    continue
                k = j+1
                l = len(nums)-1
                while(j < k and k < l):
                    if(nums[i] + nums[j] + nums[k] + nums[l] == target):
                        result.append(list((nums[i],nums[j],nums[k],nums[l])))
                        k+=1
                        l-=1
                        while(k<l and nums[k] == nums[k-1]):
                            k+=1
                        while(k<l and nums[l] == nums[l+1]):
                            l-=1
                    elif (nums[i] + nums[j] + nums[k] + nums[l] > target):
                        l-=1
                    else:
                        k+=1
        return result