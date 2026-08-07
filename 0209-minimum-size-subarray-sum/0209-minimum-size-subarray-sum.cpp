class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int win_sum=0;
        int start=0, end=0;
        int min_length=INT_MAX;
        while(end<n){
            win_sum+=nums[end];
            while(win_sum>=target){
                min_length=min(end-start+1,min_length);
                win_sum-=nums[start];
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