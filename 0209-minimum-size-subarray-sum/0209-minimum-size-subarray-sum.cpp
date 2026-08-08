class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int start=0;
        int end=0;
        int min_length=INT_MAX;
        int wind_sum=0;
        while(end<n){
            wind_sum+=nums[end];
            while(wind_sum>=target){
                min_length=min(min_length,end-start+1);
                wind_sum-=nums[start];
                start++;
            }
            end++;
        }
        if(min_length==INT_MAX){
            return 0;
        }
        return min_length;
    }
};