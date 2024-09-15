class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        hashmap={}
        for num in nums:
            hashmap[num]=hashmap.get(num,0)+1
        for number in hashmap:
            if hashmap[number]>2:
                for i in range(abs(hashmap[number]-2)):
                    nums.remove(number)
        return (len(nums))
            