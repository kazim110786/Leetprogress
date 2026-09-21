class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.length();
        int start=0;
        int len=1;
        string ans="";
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                int l=i, r=j;
                while(l<r && s[l]==s[r]){
                    l++;
                    r--;
                }
                if(l>=r && j-i+1>len){
                    start=i;
                    len=j-i+1;
                }
            }
        }
        return s.substr(start,len);
    }
};