class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n=nums.size();
        int ws=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                ws++;
            }
        }
        int count1=0;
        for(int i=0;i<ws;i++){
            if(nums[i]==1){
                count1++;
            }
        }
        int ans=count1;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                count1--;
            }
            int k=(i+ws)%n;
            
            if(nums[k]==1){
                count1++;
            }
            
            ans=max(ans,count1);
        }
        return ws-ans;
    }
};