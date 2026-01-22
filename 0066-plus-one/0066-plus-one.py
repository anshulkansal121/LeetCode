class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        digits = digits[::-1]
        carry = (digits[0] + 1)//10
        digits[0] = (digits[0] + 1)%10
        i = 1
        while(carry and i<len(digits)):
            total = (digits[i] + carry)
            carry = total//10
            digits[i] = total%10
            i+=1
        if(carry):
            digits.append(carry)
        return digits[::-1]