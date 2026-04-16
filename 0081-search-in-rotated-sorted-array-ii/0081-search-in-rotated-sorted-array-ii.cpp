class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target){
                return true;
            }else if(nums[low]==nums[mid] && nums[mid]==nums[high]){
                low+=1;
                mid-=1;
                continue;
            }else if(nums[low]<target && nums[mid]>target)
        }
    }
};