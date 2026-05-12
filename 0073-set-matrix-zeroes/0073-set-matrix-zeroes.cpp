class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<int>rows;
        vector<int>cols;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    rows.push_back(i);
                    cols.push_back(j);
                }
            }
        }
        for(int i=0;i<rows.size();i++){
            int r=rows[i];
            for(int j=0;j<n;j++){
                matrix[r][j]=0;
            }
        }
        for(int i=0;i<cols.size();i++){
            int c=cols[i];
            for(int j=0;j<m;j++){
                matrix[j][c]=0;
            }
        }
    }
};