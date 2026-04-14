class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(i==0){
                if(nums[i]!=nums[i+1]){
                    return nums[i];
                }
            }else if(nums[n-1]!=nums[n-2]){
                return nums[n-1];
            }else{
                if(nums[i]!=nums[i+1] && nums[i]!=nums[i-1]){
                    return nums[i];
                }
            }
        }
        return {};
    }
};