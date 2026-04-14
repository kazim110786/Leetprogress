class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int totalsum=0;
        int mini=INT_MAX;
        int maxi=INT_MIN;
        int minsum=0;
        int maxsum=0;
        totalsum=accumulate(nums.begin(),nums.end(),0);
        for(int i=0;i<nums.size();i++){
            if(maxsum<0){
                maxsum=0;
            }
            if(minsum>0){
                minsum=0;
            }
            minsum+=nums[i];
            maxsum+=nums[i];
            mini=min(mini,minsum);
            maxi=max(maxi,maxsum);
        }
        if(maxi<0){
            return maxi;
        }
        return max(maxi,(totalsum-mini));
    }
};