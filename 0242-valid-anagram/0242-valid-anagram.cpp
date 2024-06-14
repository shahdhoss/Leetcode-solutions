class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int,int> hashmap_s, hashmap_2;
        for(int i=0;i<s.length();i++){
            hashmap_s[s[i]]=hashmap_s[s[i]]+1;
        }
        for(int i=0;i<t.length();i++){
            hashmap_2[t[i]]=hashmap_2[t[i]]+1;
        }
        if(hashmap_s==hashmap_2){
            return true;
        }
        return false;
    }
};