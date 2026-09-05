class Solution {
public:
    bool isvowel(char c){
        return c=='a' || c=='e' || c=='i' || c=='o' || c=='u' ||
        c=='A' || c=='E' || c=='I' || c=='O' || c=='U';
    }
    string reverseVowels(string s) {
        int start=0;
        int end=s.length()-1;
        while(start<=end){
            while(start<end && !isvowel(s[start])){
                start++;
            }
            while(start<end && !isvowel(s[end])){
                end--;
            }
            swap(s[start],s[end]);
            start++;
            end--;
        }
        return s;
    }
};