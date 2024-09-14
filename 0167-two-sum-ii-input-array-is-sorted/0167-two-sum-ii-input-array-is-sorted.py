class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        hashmap={}
        for num in range(len(numbers)):
            hashmap[numbers[num]]=num
        for num in range(len(numbers)):
            diff=target-numbers[num]
            if diff in hashmap and hashmap[diff]!=num:
                return [num+1,hashmap[diff]+1]