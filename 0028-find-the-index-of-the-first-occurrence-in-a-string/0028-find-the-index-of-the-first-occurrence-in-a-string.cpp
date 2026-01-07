class Solution {
public:
    int strStr(string a, string b) {

        int n = a.size(), m = b.size();

        if(n<m) return -1;
        
        int firstidx = -1;

        for(int start = 0 ; start<n; start++){
            int i = start;
            int j = 0;

            while(j<m && a[i] == b[j]){
                firstidx = start;
                i++;
                j++;
            }

            if(j == m){
                return firstidx;
            }
            firstidx = -1;
        }

        return firstidx;
        
    }
};