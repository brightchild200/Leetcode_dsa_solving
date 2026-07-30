class Solution {
public:
    bool rotateString(string s, string goal) {
        int sn = s.length();
        int gl = goal.length();
        if(sn != gl){return false;}
         int key ; 

    return (s + s).find(goal) != string::npos;

        
    }
};