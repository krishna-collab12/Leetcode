class Solution {
public:
    int divide(int dividend, int divisor) {
        long long a = dividend ;
        long long b = divisor ;
        int flag = 1 ; 
        if(a<0 && b<0){
            a = -a ;
            b = -b ;
        }
        else if(a<0 ){
            a = -a ;
            flag = -1 ; 
        }
        else if(b<0 ){
            b = -b ;
            flag = -1 ;
        }
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
        if(flag == -1  ){
            ans = -ans ;
        }
        if (ans > INT_MAX)
        return INT_MAX;
        if (ans < INT_MIN)
        return INT_MIN;
        return ans ; 
    }
};