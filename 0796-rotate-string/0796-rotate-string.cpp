class Solution {
public:
    bool rotateString(string s, string goal) {
        int m=s.length();
        int n=goal.length();
        if(m!=n){
            return false;
        }
        string ans=s+s;
        if(ans.find(goal)!=-1){
            return true;
        }
        return false;
    }
};