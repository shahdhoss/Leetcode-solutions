class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        hashmap={}
        for string in strs:
            sorted_string=tuple(sorted(string))
            if sorted_string not in hashmap:
                hashmap[sorted_string]=[]
            hashmap[sorted_string].append(string)
        return list(hashmap.values())
