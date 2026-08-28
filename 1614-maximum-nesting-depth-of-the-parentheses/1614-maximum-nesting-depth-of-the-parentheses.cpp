class Solution {
public:
    int maxDepth(string s) {
        int n=s.length();
        int depth=0;
        int count=0;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                count++;
                depth=max(depth,count);
            }else if(s[i]==')'){
                count--;
            }
        }
        return depth;
    }
};