class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        int windowSum=0;
        for(int i=0;i<k;i++){
            windowSum+=nums[i];  
        }
        int maxSum=windowSum;
        //Sliding window starts
        int start_index=0;
        int end_index=k;
        while(end_index<n){
            windowSum-=nums[start_index];
            start_index++;
            windowSum+=nums[end_index];
            end_index++;
            maxSum=max(windowSum,maxSum);
        }
        return (double)maxSum/k;
        
    }
};