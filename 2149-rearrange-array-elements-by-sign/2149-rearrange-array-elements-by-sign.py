class Solution:
    def rearrangeArray(self, nums: List[int]) -> List[int]:
        n = len(nums)
        result = [0] * n
        posIndex = 0  # Pointer for positive numbers (even indices)
        negIndex = 1  # Pointer for negative numbers (odd indices)
        
        for num in nums:
            if num > 0:
                result[posIndex] = num
                posIndex += 2
            else:
                result[negIndex] = num
                negIndex += 2
        
        return result