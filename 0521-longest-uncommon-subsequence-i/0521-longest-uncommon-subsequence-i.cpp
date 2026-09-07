class Solution {
public:
    int findLUSlength(string a, string b) {
        int m=a.length();
        int n=b.length();
        if(a==b){
            return -1;
        }
        if(m==n){
            return m;
        }
        if(m>n){
            return m;
        }else{
            return n;
        }
        return 0;
    }
};