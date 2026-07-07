class Solution {
public:
    int maxVowels(string s, int k) {
        int n=s.length();
        int count=0;
        for(int i=0;i<k;i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                count++;
            }
        }
        int ans=count;
        int start=0;
        int end=k;
        while(end<n){
            if(s[start]=='a' || s[start]=='e' || s[start]=='i' || s[start]=='o' || s[start]=='u'){
                count--;
            }
            start++;
            if(s[end]=='a' || s[end]=='e' || s[end]=='i' || s[end]=='o' || s[end]=='u'){
                count++;
            }
            end++;
            ans=max(ans,count);
        }
        return ans;
    }
};