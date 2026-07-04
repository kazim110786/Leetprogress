class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int left=0;
        int maxLength=0;
        for(int right=0;right<n;right++){
            if(nums[right]==0){
                left=right+1;
            }
            maxLength=max(maxLength,right-left+1);
        }
        return maxLength;
    }
};