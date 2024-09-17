from math import ceil
class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        number= ceil(len(nums)/2) 
        hashmap={}
        for num in nums:
            hashmap[num]=hashmap.get(num,0)+1
        for mapp in hashmap:
            print(hashmap[mapp])
            if hashmap[mapp]>=number:
                return mapp