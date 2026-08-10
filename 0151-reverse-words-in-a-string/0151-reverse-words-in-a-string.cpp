class Solution {
public:
    string reverseWords(string s) {
        int n=s.length();
        string ans="";
        string word="";
        for(int i=0;i<=n;i++){
            if(s[i]==' ' || i==n){
                if(word==""){
                    continue;
                }
                if(ans==""){
                    ans=word;
                }else{
                    ans=word+" "+ans;
                }
                word="";
            }else{
                word+=s[i];
            }
        }
        return ans;
    }
};