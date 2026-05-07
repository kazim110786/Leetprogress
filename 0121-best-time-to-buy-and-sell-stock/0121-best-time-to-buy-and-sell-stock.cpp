class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=prices[0];
        int n=prices.size();
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            int profit=prices[i]-mini;
            maxi=max(profit,maxi);
            mini=min(mini,prices[i]);
        }
        return maxi;
    }
};