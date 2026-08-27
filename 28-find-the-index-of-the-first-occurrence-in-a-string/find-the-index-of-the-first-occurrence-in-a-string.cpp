class Solution {
public:
    int strStr(string haystack, string needle) {
        int n= needle.size();
        int m= haystack.size();

        if (n > m) return -1;
        // int k =0; 
       
        int occ;
        // checking needle in haystack
        for(int i=0; i<=m-n; i++){
             bool possible = true;
                for(int k=0; k<n; k++){
                    if(needle[k]!= haystack[i +k]){
                        possible = false;
                        break;
                    }
                }
                if(possible) return i;
            }
            return -1;
        }
    
};