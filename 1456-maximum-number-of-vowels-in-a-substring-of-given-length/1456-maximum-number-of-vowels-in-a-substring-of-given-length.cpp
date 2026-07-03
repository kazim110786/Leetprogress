class Solution {
public:
    bool isVowel(char ch){
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
            return true;
        }
        return false;
    }
    int maxVowels(string s, int k) {
        int n=s.size();
        int vowelCount=0;
        for(int i=0;i<k;i++){
            if(isVowel(s[i])){
                vowelCount++;
            }
        }
        int maxCount=vowelCount;
        int start=0;
        int end=k;
        while(end<n){
            if(isVowel(s[start])){
                vowelCount--;
            }
            start++;
            if(isVowel(s[end])){
                vowelCount++;
            }
            end++;
            maxCount=max(maxCount,vowelCount);
        }
        return maxCount;
    }
};