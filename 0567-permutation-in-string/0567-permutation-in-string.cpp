class Solution {
public:
    bool freqSame(int fr1[], int fr2[]){
        for(int i=0;i<26;i++){
            if(fr1[i]!=fr2[i]){
                return false;
            }
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        int freq[26]={0};
        for(int i=0;i<s1.length();i++){
            freq[s1[i]-'a']++;
        }
        int windowSize=s1.length();
        for(int i=0;i<s2.length();i++){
            int windowIdx=0, idx=i;
            int windowFreq[26]={0};
            while(windowIdx < windowSize && idx < s2.length()){
                windowFreq[s2[idx]-'a']++;
                windowIdx++, idx++;
            }
            if(freqSame(freq,windowFreq)==true){
                return true;
            }
        }
        return false;
    }
};