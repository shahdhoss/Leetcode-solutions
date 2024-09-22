class Solution:
    def findClosestNumber(self, nums: List[int]) -> int:
        lis=list(set(nums))
        minn=float('inf')
        for num in nums:
            if num <0 and abs(num) in nums:
                num=abs(num)
            temp=abs(num-0)
            if temp<=minn:
                minn=temp
                number=num
        return number