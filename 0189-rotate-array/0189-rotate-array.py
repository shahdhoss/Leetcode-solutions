class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        for i in range(k):
            element=nums[-1]
            nums.pop(-1)
            nums.insert(0,element)
        return nums
    
        