class Solution:
    def minPathSum(self, grid: List[List[int]]) -> int:
        m=len(grid)-1
        n=len(grid[0])-1
        if m==0 and n ==0:
            return grid[m][n]
        m=len(grid)-1
        n=len(grid[0])-1
        memo={}
        def minimum(m,n):
            if m<0 or n<0:
                return 999999999999999
            if m==0 and n==0:
                return grid[m][n]
            if (m,n) in memo:
                return memo[(m,n)]
            val1=grid[m][n]+minimum(m-1,n)
            val2=grid[m][n]+minimum(m,n-1)
            memo[(m,n)] = min(val1,val2)
            return memo[(m,n)]
        minimum(m,n)
        return memo[(m,n)]