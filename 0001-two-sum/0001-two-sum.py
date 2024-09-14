class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hash_map={}
        for num in range(len(nums)):
            hash_map[nums[num]]=num
        for num in range(len(nums)):
            diff=target-nums[num]
            if diff in hash_map and hash_map[diff] != num:
                return [num, hash_map[diff]]

        