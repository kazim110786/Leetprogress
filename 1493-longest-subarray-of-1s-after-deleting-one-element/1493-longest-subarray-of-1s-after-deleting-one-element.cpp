class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        int max_len=INT_MIN;
        int left=0;
        int right=0;
        int zeroes=0;
        for(int right=0;right<n;right++){
            if(nums[right]==0){
                zeroes++;
            }
            if(zeroes>1){
                if(nums[left]==0){
                    zeroes--;
                }
                left++;
            }
            max_len=max(max_len,right-left);
        }
        return max_len;
    }
};