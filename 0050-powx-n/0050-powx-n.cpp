class Solution {
public:
    double power(double x, int n){
        if(n == 0){
            return 1 ; 
        }
        if(n == 1 ){
            return x ; 
        }
        double y = power(x*x , n/2);
        if(n&1){
            return x*y ; 
        }
        else 
            return y ; 
    }
    double myPow(double x, int n) {
        if (n<0){
            return power(1/x,n);
        }
        return power(x , n ) ;     
    }
};