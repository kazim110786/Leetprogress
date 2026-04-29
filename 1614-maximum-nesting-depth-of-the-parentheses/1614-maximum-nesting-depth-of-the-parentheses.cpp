class Solution {
public:
    int maxDepth(string s) {
        int n=s.length();
        int count=0;
        int max_depth=INT_MIN;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                count++;
                max_depth=max(count,max_depth);
            }else if(s[i]==')'){
                count--;
            }
        }
        return max_depth;
    }
};