class Solution:
    def isPalindrome(self, s: str) -> bool:
        if s==" ":
            return True
        l=""
        for i in s:
            if i.isalnum()==True:
                l=l+i
        l=l.lower()
        s_rev=l[::-1]
        if (l==s_rev):
            return True
        else:
            return False
        