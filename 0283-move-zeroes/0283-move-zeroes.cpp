class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int len=0;
        vector<int>num1;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                len++;
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                num1.push_back(nums[i]);
            }
        }
        for(int i=0;i<len;i++){
            num1.push_back(0);
        }
        nums=num1;
    }
};