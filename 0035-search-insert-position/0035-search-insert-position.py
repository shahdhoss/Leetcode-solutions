class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        mid=len(nums)//2
        if nums[mid]<=target:
            for i in range(mid,len(nums)):
                if nums[i]==target:
                    return i
                elif nums[i]>target:
                    return i
            return i+1
        else:
            for i in range(mid+1):
                if nums[i]==target:
                    return i
                elif nums[i]>target:
                    return i
            return i+1
