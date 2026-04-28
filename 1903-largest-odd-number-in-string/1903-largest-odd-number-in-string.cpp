class Solution {
public:
    string largestOddNumber(string num) {
        while(num.length()>0){
            int digit=num[num.length()-1]-'0';
            if(digit%2!=0){
                return num;
            }
            num.pop_back();
        }
        return "";
    }
};