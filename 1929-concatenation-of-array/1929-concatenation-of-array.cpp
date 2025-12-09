class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> nex(2*n);

        for(int i = 0; i<n;i++){
            nex[i] = nums[i];
            nex[i+n] = nums[i];
        }

        return nex;
        
    }
};