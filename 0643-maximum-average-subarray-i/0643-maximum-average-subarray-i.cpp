class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        int max_sum=sum;
        int start=0;
        int end=k;
        while(end<n){
            sum-=nums[start];
            start++;
            sum+=nums[end];
            end++;
            max_sum=max(sum,max_sum);
        }
        return (double)max_sum/k;
    }
};