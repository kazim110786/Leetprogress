class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n=arr.size();
        int win_sum=0;
        for(int i=0;i<k;i++){
            win_sum+=arr[i];
        }
        int count=0;
        if(win_sum>=threshold*k){
            count++;
        }
        int max_count=count;
        int start=0, end=k;
        while(end<n){
            win_sum-=arr[start];
            start++;
            win_sum+=arr[end];
            end++;
            if(win_sum>=threshold*k){
                count++;
            }
            max_count=max(max_count,count);
        }
        return max_count;
    }
};