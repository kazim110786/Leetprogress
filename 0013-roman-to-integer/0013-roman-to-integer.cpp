class Solution {
public:
    int romanToInt(string s) {
        int val=0;
        int ans=0;
        int n=s.length();
        for(int i=0;i<n;i++){
            if(s[i]=='I'){
                val=1;
            }else if(s[i]=='V'){
                val=5;
            }else if(s[i]=='X'){
                val=10;
            }else if(s[i]=='L'){
                val=50;
            }else if(s[i]=='C'){
                val=100;
            }else if(s[i]=='D'){
                val=500;
            }else{
                val=1000;
            }

            if(i+1<n){
                int next=0;
                if(s[i+1]=='I'){
                    next=1;
                }else if(s[i+1]=='V'){
                    next=5;
                }else if(s[i+1]=='X'){
                    next=10;
                }else if(s[i+1]=='L'){
                    next=50;
                }else if(s[i+1]=='C'){
                    next=100;
                }else if(s[i+1]=='D'){
                    next=500;
                }else{
                    next=1000;
                }
                if(val<next){
                    ans-=val;
                }else{
                    ans+=val;
                }
            }else{
                ans+=val;
            }
        }
        return ans;

    }
};