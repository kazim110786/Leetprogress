class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int zeroes=0;
        int left=0;
        int max_len=INT_MIN;
        for(int right=0;right<n;right++){
            if(nums[right]==0){
                zeroes++;
            }
            if(zeroes>k){
                if(nums[left]==0){
                    zeroes--;
                }
                left++;
            }
            max_len=max(max_len,right-left+1);
        }
        return max_len;
    }
};