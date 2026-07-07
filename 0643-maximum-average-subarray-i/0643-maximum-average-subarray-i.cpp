class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        int windowSum=0;
        for(int i=0;i<k;i++){
            windowSum+=nums[i];
        }
        int maxSum=windowSum;
        int start=0;
        int end=k;
        while(end<n){
            windowSum-=nums[start];
            start++;
            windowSum+=nums[end];
            end++;
            maxSum=max(maxSum,windowSum);
        }
        return (double)maxSum/k;
    }
};