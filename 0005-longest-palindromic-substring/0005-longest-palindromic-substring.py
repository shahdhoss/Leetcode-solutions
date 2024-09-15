class Solution:
    def longestPalindrome(self, s: str) -> str:
        longest_str=''
        for i in range(len(s)):
            for j in range(i,len(s)):
                sbstr=s[i:j+1]
                if sbstr==sbstr[::-1] and len(sbstr)>len(longest_str):
                    longest_str=sbstr
        return longest_str

