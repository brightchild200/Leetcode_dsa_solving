class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n= nums.size();
        unordered_set<int> st;
        for(int i=0; i<n; i++){
            st.insert(nums[i]);
        }

        for(int i=1; i<110; i++){
            int mul = k*i;
            if(st.find(mul) == st.end()){
                return mul;
                exit;
            }
        }
        return -1;
    }
};