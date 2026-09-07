class Solution {
public:
    bool checkRecord(string s) {
        int n=s.length();
        int countA=0;
        for(int i=0;i<n;i++){
            if(s[i]=='A'){
                countA++;
            }
            if((s[i]=='L' && s[i+1]=='L' && s[i+2]=='L' && i+2<n) || countA>1){
                return false;
            }
        }
        return true;
    }
};