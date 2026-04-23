class Solution {
public:
    string largestOddNumber(string num) {
        while(num.length()>0){
            int last=num[num.length()-1]-'0';
            if(last%2!=0){
                return num;
            }
            num.pop_back();
        }
        return "";
    }
};