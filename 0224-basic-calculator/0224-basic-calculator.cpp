class Solution {
public:
    int calculate(string s) {
        int n= s.size();
        int sum=0;
        int sign=1;
        stack<int>st;
        for(int i=0;i<n;i++)
        {
            if(s[i]>='0' && s[i]<='9'){
                int num =0;
                while(n>i && s[i]>='0' && s[i]<='9'){
                    num = num*10 + (s[i]-'0');  //used to convert the given ascii no. to decimal no. for example if s[i]=5 then expression s[i] -'0' that is equivalent to 53 - 48. and equal to number 5.
                    i++;
                }
                sum += num*sign;
                i--;
            }
            else if(s[i]=='+')
         sign =1;
             else if(s[i]=='-')
               sign=-1;
     else if(s[i]=='(')
     {
         st.push(sum);
         st.push(sign);
         sum=0;
         sign=1;
     }
             else if(s[i]==')')
     {
         sum =st.top() * sum;  // top of stack has sign i.e. -1 or 1
                 st.pop();
                 sum+=st.top();
                 st.pop();
     }      
        }
        return sum;
    }
};