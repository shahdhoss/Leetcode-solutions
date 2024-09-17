class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        s_r=0
        t_r=0
        while(s_r<len(s)):
            print(t_r,' ',s_r)
            if t_r>=len(t):
                return False
            if s[s_r]==t[t_r]:
                s_r+=1
                t_r+=1
            else:
                t_r+=1
        return True



        