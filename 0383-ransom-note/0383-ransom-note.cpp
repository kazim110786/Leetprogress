class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int freq1[256]={0};
        // int freq2=256
        for(int i=0;i<magazine.length();i++){
            freq1[magazine[i]]++;
        }
        for(int i=0;i<ransomNote.length();i++){
            if(freq1[ransomNote[i]]==0){
                return false;
            }
            freq1[ransomNote[i]]--;
        }
        return true;
    }
};