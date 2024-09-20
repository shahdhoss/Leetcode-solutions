class Solution:
    def partition(self, s: str) -> List[List[str]]:
        res,sol=[],[]
        def recr(index):
            if len(s)==index:
                sol.append(res[:])
                return 
            for i in range(index,len(s)):
                if s[index:i+1]==s[index:i+1][::-1]:
                    res.append(s[index:i+1])
                    recr(i+1)
                    res.pop()
        answer=recr(0)
        return sol
