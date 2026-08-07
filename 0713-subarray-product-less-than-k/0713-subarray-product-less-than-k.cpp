class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n=nums.size();
        int win_prod=1;
        int start=0, end=0;
        int count=0;
        if(k<=1){
            return 0;
        }
        while(end<n){
            win_prod*=nums[end];
            while(win_prod>=k){
                win_prod/=nums[start];
                start++;
            }
            count+=(end-start)+1;
            end++;
        }
        return count;
    }
};