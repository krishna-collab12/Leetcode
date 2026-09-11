class Solution {
public:
    int minBitFlips(int start, int goal) {
        int x = start^goal , i=0 ;
        while(x){
            x &= x-1 ;
            i++ ;
        }
        return i ;
    }
};