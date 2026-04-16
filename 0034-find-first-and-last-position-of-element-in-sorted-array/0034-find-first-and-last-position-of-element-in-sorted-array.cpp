class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start=-1;
        int end=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                start=i;
                break;
            }
        }
        if(start==-1){
            return {-1,-1};
        }
        for(int i=start;i<nums.size();i++){
            if(nums[i]==target){
                end=i;
            }
        }
        return {start,end};
    }
};