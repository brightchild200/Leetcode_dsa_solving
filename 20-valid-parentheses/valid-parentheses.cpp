class Solution {
public:
    bool isValid(string s) {
        if(s.length() % 2 !=0) return false;

        stack<char> st;
        unordered_map<char, char> brac = {
            {')', '('}, 
            {']', '['},
            {'}', '{'}
        };

        for(char c:s){
            if(brac.count(c)){
                if(!st.empty() && st.top() == brac[c]){
                    st.pop();
                }else { return false;}
            } else { st.push(c);}
        }
        return st.empty();
    }
};