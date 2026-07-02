class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        int maxSum=0, windowSum=0;
        for(int i=0;i<k;i++){
            windowSum+=nums[i];
            
        }
        maxSum=windowSum;
        for(int i=k;i<n;i++){
            windowSum-=nums[i-k];
            windowSum+=nums[i];
            maxSum=max(maxSum,windowSum);
        }
        return (double)maxSum/k;
    }
};