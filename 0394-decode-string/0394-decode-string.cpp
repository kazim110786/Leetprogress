class Solution {
public:
    string decodeString(string s) {
        stack<int>num;
        stack<string>str;
        int currNum=0;
        string currStr="";
        for(char c:s){
            if(isdigit(c)){
                currNum=currNum*10+(c-'0');
            }else if(c=='['){
                num.push(currNum);
                str.push(currStr);
                currNum = 0;
                currStr = "";
            }else if(c==']'){
                int k = num.top();
                num.pop();
                string prevStr = str.top();
                str.pop();
                string temp = "";
                while (k--) {
                    temp += currStr;
                }
                currStr = prevStr + temp;
            }else{
                currStr+=c;
            }
        }
        return currStr;
    }
};