class Solution {
public:
    string build(string r){
        string ans="";
        for(char c:r){
            if(c!='#'){
                ans.push_back(c);
            }else{
                if(!ans.empty()){
                    ans.pop_back();
                }
            }
        }
        return ans;
    }
    bool backspaceCompare(string s, string t) {
        return build(s)==build(t);
    }
};