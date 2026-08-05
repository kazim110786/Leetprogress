class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        string word="";
        int n=s.length();
        for(int i=0;i<=n;i++){
            if(s[i]==' ' || i==n){
                if(word==""){
                    continue;
                }
                if(ans!=""){
                    ans=word+" "+ans;
                }else{
                    ans=word;
                }
                word="";
            }else{
                word+=s[i];
            }
        }
        return ans;
    }
};