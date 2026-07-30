class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.length();
        string temp = "";
        int k=0;
        for(int i =n-1 ; i>=0; i--){
            if(num[i] %2 !=0){
               return num.substr(0, i+1);
            }
        }
        // if(k==0) return temp;

        // for(int i=0; i<=k ; i++){
        //     temp[i] = num[i];
        // }
        return "";
    }
};