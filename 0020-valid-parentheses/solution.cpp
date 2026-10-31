class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(int i=0;i<s.size();i++){
            //1.open brackets
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                st.push(s[i]);
            }
            else{ //2.close brackets
               
                if(st.empty()) return false;
                
                if( (st.top()=='(' && s[i]!=')') ||
                    (st.top()=='{' && s[i]!='}') ||
                    (st.top()=='[' && s[i]!=']') ){
                        return false;
                    }
                
                st.pop(); //match ho gya issliye nikaalte jao
            }
        }
        return st.empty();
    }
};
