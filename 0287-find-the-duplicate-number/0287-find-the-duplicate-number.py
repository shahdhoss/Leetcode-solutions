class Solution:
    def findDuplicate(self, nums: List[int]) -> int:
        dictionary={}
        for num in nums:
            if num not in dictionary.keys():
                dictionary[num]=dictionary.get(num,0)+1;
            else:
                return num