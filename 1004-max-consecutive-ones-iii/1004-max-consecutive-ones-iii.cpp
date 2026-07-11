class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int start=0, maxLen=0, zeros=0;
        for(int right=0;right<n;right++){
            if(nums[right]==0){
                zeros++;
            }
            while(zeros>k){
                if(nums[start]==0){
                    zeros--;
                }
                start++;
            }
            maxLen=max(maxLen,right-start+1);
        }
        return maxLen;
    }
};