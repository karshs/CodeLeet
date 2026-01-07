class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        int n = a.size(), m = b.size();
        
        vector<int> freq(26,0);
        
        for(char c : a) freq[c - 'a']++;
        
        for(char c  : b){
            if(freq[c-'a'] == 0) return -1;
        }
        
        
        for(int start = 0 ; start<n; start++){
            
            int i = start;
            int j = 0 ;
            
            while(j<m && a[i % n] == b[j]){
                i++;
                j++;
            }
            
            if(j == m){
                
                return (i+n-1) / n;
                
                
            }
        }
        
        return -1;
        
    }
};