class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int left=0;
        int count=0;
        int maxLen=0;
        for(int right=0;right<n;right++){
            if(nums[right]==0){
                left=right+1;
            }
            maxLen=max(maxLen,right-left+1);
        }
        return maxLen;
    }
};