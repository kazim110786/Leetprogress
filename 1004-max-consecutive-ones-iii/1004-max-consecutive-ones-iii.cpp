class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int start=0;
        int max_length=INT_MIN;
        int zeroes=0;
        for(int right=0;right<n;right++){
            if(nums[right]==0){
                zeroes++;
            }
            if(zeroes>k){
                if(nums[start]==0){
                    zeroes--;
                }
                start++;
            }
            max_length=max(max_length,right-start+1);
        }
        return max_length;
    }
};