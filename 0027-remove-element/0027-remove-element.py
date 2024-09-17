class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        count=0
        i=0
        while(i<len(nums)):
            if nums[i]!= val:
                i+=1
            else:
                temp=nums[i]
                nums.pop(i)
        return len(nums)