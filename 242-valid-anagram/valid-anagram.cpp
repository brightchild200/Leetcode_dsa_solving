class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.length();

        if(s.size() != t.size())
            return false;
        vector<char> si(n); vector<char> ti(n);
        for(int i=0; i<n; i++ ){
            si[i] = s[i];
            ti[i] = t[i];
        }
        sort(si.begin(), si.end());
        sort(ti.begin(), ti.end());
        for(int i =0; i<n; i++){
            if(si[i] != ti[i]){
                return false;
            }
        }
        return true;
    }
};