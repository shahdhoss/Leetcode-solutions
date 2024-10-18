class Solution:
    def lastStoneWeightII(self, stones: List[int]) -> int:
        dp={}
        total=sum(stones)
        def backtrack(i,currentSum):
            if (i,currentSum) in dp:
                return dp[(i,currentSum)]
            if i==len(stones):
                return abs(currentSum-(total-currentSum))
            include=backtrack(i+1,currentSum+stones[i])
            exclude=backtrack(i+1,currentSum)
            dp[(i,currentSum)]=min(include,exclude)
            return dp[(i,currentSum)]
        return backtrack(0,0)
        