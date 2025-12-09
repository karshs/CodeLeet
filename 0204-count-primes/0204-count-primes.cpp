class Solution {
public:
    

    void sieve(vector<int>& prime, int n){
        
        for(int i = 2; i*i< n; i++){
            if(prime[i] == 1){
                for(int j = i*i; j<n ; j+=i){
                    prime[j] =0;
                }
            }
        }

    }
    int countPrimes(int n) {

        if(n<=2 ) return 0;
        vector<int> prime(n,1);
        sieve(prime,n);
        int count = 0;

        for(int i= 2; i< n; i++){
            if(prime[i] == 1) count++;
        }
        return count;
        
    }
};