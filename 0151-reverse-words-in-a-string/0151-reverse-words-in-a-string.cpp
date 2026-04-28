class Solution {
public:
    string reverseWords(string s) {
        string word="";
        string ans="";
        for(int i=0;i<=s.length();i++){
            if(i==s.length() || s[i]==' '){
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