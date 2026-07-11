class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int zeros=0, maxLen=0;
        int start=0;
        for(int end=0;end<n;end++){
            if(nums[end]==0){
                zeros++;
            }
            while(zeros>k){
                if(nums[start]==0){
                    zeros--;
                }
                start++;   
            }
            maxLen=max(maxLen,end-start+1);
        }
        return maxLen;
    }
};