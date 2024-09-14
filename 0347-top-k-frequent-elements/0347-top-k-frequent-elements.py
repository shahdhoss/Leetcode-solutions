class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        hashmap={}
        for num in nums:
            hashmap[num]=hashmap.get(num,0)+1
        sorted_hashmap = sorted(hashmap.items(), key=lambda x: x[1], reverse=True)
        print(sorted_hashmap)
        answer=[]
        for i in range(k):
            answer.append(sorted_hashmap[i][0])
        return answer
