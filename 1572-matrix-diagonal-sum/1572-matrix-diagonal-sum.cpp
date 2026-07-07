class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        int sum=0;
        for(int i=0;i<m;i++){
            sum+=mat[i][i];
        }
        for(int i=0;i<m;i++){
            sum+=mat[i][m-i-1];
        }
        if(n%2==1)sum-=mat[n/2][n/2];
        return sum;
    }
};