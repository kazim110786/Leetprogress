class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int>last(26,-1);
        vector<bool>seen(26,false);
        int n=s.length();
        for(int i=0;i<n;i++){
            last[s[i]-'a']=i;
        }
        stack<char>st;
        string res;
        for(int i=0;i<n;i++){
            if(seen[s[i]-'a']){
                continue;
            }
            while(!st.empty() and s[i]<st.top() and last[st.top()-'a']>i){
                seen[st.top()-'a']=false;
                st.pop();
            }
            st.push(s[i]);
            seen[s[i]-'a']=true;
        }
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};