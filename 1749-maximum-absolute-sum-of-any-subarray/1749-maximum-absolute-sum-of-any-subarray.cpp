class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int curr_min=0;
        int curr_max=0;
        int max_sum=0;
        int min_sum=0;
        for(int i=0;i<nums.size();i++){
            curr_max+=nums[i];
            if(curr_max>max_sum){
                max_sum=curr_max;
            }
            if(curr_max<0){
                curr_max=0;
            }
            curr_min+=nums[i];
            if(curr_min<min_sum){
                min_sum=curr_min;
            }
            if(curr_min>0){
                curr_min=0;
            }
        }
        return max(abs(max_sum),abs(min_sum));
    }
};