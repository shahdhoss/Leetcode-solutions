class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        index=m
        for i in nums2:
            nums1[index]=i
            index+=1
        nums1.sort()
        return nums1
        