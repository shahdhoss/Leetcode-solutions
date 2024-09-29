class Solution:
    def findMin(self, nums: List[int]) -> int:
        if len(nums)==1:
            return nums[0]
        mid=len(nums)//2
        minn=9999999
        if nums[mid]<nums[len(nums)-1]:
            for i in range(mid+1):
                if nums[i]<minn:
                    minn=nums[i]
        else:
            for i in range(mid-1,len(nums)):
                if nums[i]<minn:
                    minn=nums[i]
        return minn