class Solution {
public:
    int divide(int dividend, int divisor) {
        long long a = dividend ;
        long long b = divisor ;
        int flag = (a < 0) ^ (b < 0);
        a = abs(a);
        b = abs(b);
        long long ans =0 ; 
        long long x = b ;
        long long i = 1 ;
        while(a >= x){
            x = x<<1 ;
            i = i<<1 ; 
        }
        while(i){
            x = x>>1 ;
            i = i>>1 ;
            if(a >=x ){
                a -= x ;
                ans = ans + i ;
            }
        }
        if(flag){
            ans = -ans ;
        }
        if (ans > INT_MAX)
        return INT_MAX;
        if (ans < INT_MIN)
        return INT_MIN;
        return ans ; 
    }
};