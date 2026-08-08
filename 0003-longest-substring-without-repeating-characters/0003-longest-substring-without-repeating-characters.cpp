class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>set;
        int n=s.length();
        int left=0;
        int max_len=0;
        for(int right=0;right<n;right++){
            while(set.contains(s[right])){
                set.erase(s[left]);
                left++;
            }
            set.insert(s[right]);
            max_len=max(max_len,right-left+1);
        }
        return max_len;
    }
};