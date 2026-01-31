class Solution:
    def maxDepth(self, s: str) -> int:
        depth = 0
        out = 0
        for ch in s:
            if(ch == '('):
                out+=1
            elif(ch == ')'):
                out-=1
            depth = max(depth,out)
        return depth