class Solution {
public:
    string reverseWords(string s) {
        int n=s.length();
        string ans, word;
        for(int i=0;i<=n;i++){
            if(i==n || s[i]==' '){
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