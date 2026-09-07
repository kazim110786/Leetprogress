class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n=s.length();
        string str=s+s;
        int pos=str.find(s,1);
        if(pos>0 && pos<n){
            return true;
        }
        return false;
    }
};