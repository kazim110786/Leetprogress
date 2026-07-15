class Solution {
public:
    int thr(vector<int>& nums, int div){
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=(ceil)((double)nums[i]/(double)div);
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n=nums.size();
        int start=1;
        int end=*max_element(nums.begin(),nums.end());
        int ans=INT_MAX;
        while(start<=end){
            int mid=(start+end)/2;
            int sum=thr(nums,mid);
            if(sum<=threshold){
                ans=mid;
                end=mid-1;
            }else{
                start=mid+1;
            }
        }
        return ans;
    }
};