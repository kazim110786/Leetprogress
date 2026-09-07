class Solution {
public:
    bool detectCapitalUse(string word) {
        if(word.length()==1){
            return true;
        }
        for(int i=1;i<word.length();i++){
            if(isupper(word[i]) && islower(word[i-1])){
                return false;
            }else if(islower(word[i]) && isupper(word[i+1])){
                return false;
            }else if(isupper(word[i]) && islower(word[i+1]) && isupper(word[0])){
                return false;
            }
            else{
                continue;
            }
        }
        return true;;
    }
};