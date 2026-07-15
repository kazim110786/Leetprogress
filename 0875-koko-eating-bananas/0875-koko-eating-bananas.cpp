class Solution {
public:
    long long hrs(vector<int>& piles, int hourly){
        int n=piles.size();
        long long ans=0;
        for(int i=0;i<n;i++){
            ans+=(piles[i]+hourly-1)/hourly;
        }
        return ans;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int start=1;
        int end=*max_element(piles.begin(),piles.end());
        int ans=INT_MAX;
        while(start<=end){
            int mid=(start+end)/2;
            long long totalhrs=hrs(piles,mid);
            if(totalhrs<=h){
                ans=mid;
                end=mid-1;
            }else{
                start=mid+1;
            }
        }
        return ans;
    }
};