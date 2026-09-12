class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>m1,m2;
        int m=s.length();
        int n=t.length();
        if(m!=n){
            return false;
        }
        for(int i=0;i<m;i++){
            m1[s[i]]=t[i];
            m2[t[i]]=s[i];
        }
        for(int i=0;i<m;i++){
            if(m1[s[i]]!=t[i]){
                return false;
            }
            if(m2[t[i]]!=s[i]){
                return false;
            }
        }
        return true;
    }
};