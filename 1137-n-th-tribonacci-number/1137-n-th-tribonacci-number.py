class Solution:
    def tribonacci(self, n: int) -> int:
        memo={0:0,1:1,2:1}
        def answer(n):
            if n in memo:
                return memo[n]
            val1=answer(n-1)
            val2=answer(n-2)
            val3=answer(n-3)
            memo[n]=val1+val2+val3
            return memo[n]
        ans=answer(n)
        return ans