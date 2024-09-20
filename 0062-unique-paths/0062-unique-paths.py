class Solution(object):
    def uniquePaths(self, m, n):
        memo={}
        def recur(m,n):
            if m==1 and n==1:
                return 1
            if m<0 or n<0:
                return 0
            if (m,n) in memo:
                return memo[(m,n)]
            recur(m-1,n)
            recur(m,n-1)
            memo[(m,n)]=recur(m-1,n)+recur(m,n-1)
            return memo[(m,n)]
        answer=recur(m,n)
        return answer