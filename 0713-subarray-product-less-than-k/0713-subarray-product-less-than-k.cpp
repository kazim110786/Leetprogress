class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n=nums.size();
        int wind_prod=1;
        int start=0;
        int end=0;
        if(k<=1){
            return 0;
        }
        int count=0;
        while(end<n){
            wind_prod*=nums[end];
            while(wind_prod>=k){
                wind_prod/=nums[start];
                start++;
            }
            count+=end-start+1;
            end++;
        }
        return count;
    }
};