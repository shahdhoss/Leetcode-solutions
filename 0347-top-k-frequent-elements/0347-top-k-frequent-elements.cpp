class Solution {
public:
    vector<int>topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> hashmap;
        for(int i=0;i<nums.size();i++){
            hashmap[nums[i]]=hashmap[nums[i]]+1;
        }
        multimap <int,int> swapped_map;
        for(const auto& pair:hashmap){
            swapped_map.insert({pair.second,pair.first});
        }
    
        vector<int> answer;
        auto it=swapped_map.rbegin();
        for(int i=0;i<k;i++){
            answer.push_back(it->second);
            ++it;
        }
        return answer;
    } 
};