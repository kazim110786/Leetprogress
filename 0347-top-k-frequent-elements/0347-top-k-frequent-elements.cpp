class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int num:nums){
            mp[num]++;
        }
        priority_queue<pair<int,int>>max_heap;
        for(auto it:mp){
            max_heap.push({it.second, it.first});
        }
        vector<int>result;
        while(k--){
            if(!max_heap.empty()){
                result.push_back(max_heap.top().second);
            }
            max_heap.pop();
        }
        return result;
    }
};