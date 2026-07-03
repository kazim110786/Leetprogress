class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n=arr.size();
        int windowSum=0;
        for(int i=0;i<k;i++){
            windowSum+=arr[i];
        }
        int count=0;
        if(windowSum>=threshold*k){
            count++;
        }
        int start=0;
        int end=k;
        while(end<n){
            windowSum-=arr[start];
            start++;
            windowSum+=arr[end];
            end++;
            if(windowSum>=threshold*k){
                count++;
            }
        }
        return count;
    }
};