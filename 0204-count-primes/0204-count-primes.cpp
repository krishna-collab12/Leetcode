class Solution {
public:
    int countPrimes(int n) {
        if(n<3){
            return 0 ; 
        }
        vector<bool> IsPrime(n,true);
        for(int i=3 ; i*i < n ; i+=2){
            if(!IsPrime[i])
            continue ; 
            for(int x = i*i ; x<n ; x+=2*i){
                IsPrime[x] = 0 ; 
            }
        }
        int count = 1 ; 
        for(int x = 3 ; x<n ; x+=2){
            if(IsPrime[x]) 
            count++ ;  
        }
        return count ; 
    }
};