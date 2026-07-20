class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int left=0;
        int max_length=INT_MIN;
        for(int right=0;right<n;right++){
            if(nums[right]==0){
                left=right+1;
            }
            max_length=max(max_length,right-left+1);
        }
        return max_length;
    }
};