class Solution {
public:
    string reverseWords(string s) {
        int n=s.length();
        string word="";
        string ans="";
        for(int i=0;i<=n;i++){
            if(s[i]==' ' || i==n){
                if(word==""){
                    continue;
                }
                if(ans!=""){
                    ans=word+" "+ans;
                }
                if(ans==""){
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