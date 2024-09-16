class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        l=0
        r=0
        lis=[]
        window=0
        maxx=0
        while(r<len(s)):
            if s[r] not in lis:
                lis.append(s[r])
                window=(r-l)+1
                maxx=max(maxx,window)
                r+=1
            else:
                lis.remove(s[l])
                l+=1
                window=(r-l)+1
                maxx=max(maxx,window)
        return maxx
