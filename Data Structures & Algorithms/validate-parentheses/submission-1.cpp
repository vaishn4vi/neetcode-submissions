class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(int i=0;i<s.size();i++){
            char ch= s[i];
           while(!st.empty()){
            if(ch=='('&& st.top()==')'){
                return true;
            }
           else if(ch=='['&& st.top()==']'){
                return true;
            }
           else if(ch=='{'&& st.top()=='}'){
                return true;
            }
            else{
                st.pop();
            }
            st.push(ch);
           }
           if(st.size()==0){
            return true;
           }
        }
         return false;
    }
};
