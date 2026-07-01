class Solution {
public:
    bool canMake(vector<int>&bloomDay, int m, int k, int mid){
        int flowers=0, bouquet=0;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]<=mid){
                flowers++;
            }else{
                flowers=0;
            }
            if(flowers==k){
                bouquet++;
                flowers=0;
            }
        }
        return bouquet>=m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int start=*min_element(bloomDay.begin(),bloomDay.end()), end=*max_element(bloomDay.begin(),bloomDay.end());
        int ans=-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(canMake(bloomDay,m,k,mid)){
                ans=mid;
                end=mid-1;
            }else{
                start=mid+1;
            }
        }
        return ans;
    }
};