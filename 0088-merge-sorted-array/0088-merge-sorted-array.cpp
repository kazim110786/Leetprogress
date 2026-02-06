class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> ans(m+n);
        for(int i=0;i<m;i++){
            ans[i]=nums1[i];
        }
        for(int i=0;i<n;i++){
            ans[i+m]=nums2[i];
        }
        sort(ans.begin(),ans.end());
        for(int i=0;i<ans.size();i++){
            nums1[i]=ans[i];
        }

    }
};