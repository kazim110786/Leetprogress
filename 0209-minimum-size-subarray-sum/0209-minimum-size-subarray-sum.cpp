class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int start=0;
        int end=0;
        int windowSum=0;
        int min_length=INT_MAX;
        while(end<n){
            windowSum+=nums[end];
            while(windowSum>=target){
                min_length=min(min_length, end-start+1);
                windowSum-=nums[start];
                start++;
            }
            end++;
        }
        return (min_length==INT_MAX) ? 0 : min_length;
    }
};