class Solution {
public:
    string removeOuterParentheses(string s) {
        int n=s.length();
        string ans="";
        int count=0;
        for(char c:s){
            if(c=='('){
                if(count>0){
                    ans+=c;
                }
                count++;
            }else{
                count--;
                if(count>0){
                    ans+=c;
                }
            }
        }
        return ans;
    }
};