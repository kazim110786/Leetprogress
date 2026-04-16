class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int maxlen=1;
        int count=1;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=1;i<n;i++){
            if(nums[i-1]==nums[i]){
                continue;
            }else if(nums[i]==nums[i-1]+1){
                count++;
            }else{
                count=1;
            }
            maxlen=max(count,maxlen);
        }
        return maxlen;
    }
};