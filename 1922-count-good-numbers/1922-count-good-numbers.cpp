class Solution {
public:
    long long int power(long long n ,long long int ans ){
        if(n == 1){
            return ans ; 
        }
        if(n==0){
            return 1 ; 
        }
        long long int y = power(n/2,(ans*ans)%(1000000007));
        if(n & 1){
            return (ans*y )%(1000000007); 
        }
        else{
            return y%(1000000007);
        }
    }
    int countGoodNumbers(long long n) {
        long long int ans = 1;
        if(n & 1){
            ans = 5 ;  
        }
        ans = ans*power(n/2, 20);
        return ans %(1000000007) ; 
    }
};