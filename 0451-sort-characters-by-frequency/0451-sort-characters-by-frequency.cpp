class Solution {
public:
    string frequencySort(string s) {
        int freq[256]={0};
        for(char a:s){
            freq[a]++;
        }
        sort(s.begin(),s.end(),[&](char a, char b){
            if(freq[a]==freq[b]){
                return b>a;
            }
            return freq[a]>freq[b];
        });
        return s;
    }
};