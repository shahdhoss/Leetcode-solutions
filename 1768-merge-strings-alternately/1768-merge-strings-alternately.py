class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        string=''
        length=min(len(word1),len(word2))
        for i in range(length):
            string+=word1[i]
            string+=word2[i]
        if len(word1)>=len(word2):
            maxword=word1
        else:
            maxword=word2
        string+=maxword[i+1:]
        return string