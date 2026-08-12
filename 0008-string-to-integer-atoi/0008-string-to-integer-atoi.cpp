// class Solution {
// public:
//     int myAtoi(string s) {
//         int n = s.length();
//         int j = 0 ;
//         int ans = 0 ;
//         int flag = 0 ;
//         for( int i=0 ; i< n ; i++){
//             if(s[i]==' '){
//                 j++;
//             }
//             else break ;
//         }
//         if(s[j]=='+'){
//             j++;
//         }
//         else if(s[j]=='-'){
//             j++;
//             flag = 1; 
//         }
//         for(int i=j ; i<n ; i++){
//             int x = s[i] - '0';
//             if(x<10 && x >= 0){
//                 if (ans > INT_MAX / 10 ||(ans == INT_MAX / 10 && x > 7)) {
//                     return flag ? INT_MIN : INT_MAX;
//                 }
//                 ans = ans*10 + x ;
//             }
//             else{
//                 if (flag){
//                     ans = ans *(-1) ;
//                 }
//                 return ans ; 
//             }
//         }  
//         if (flag){
//             ans = ans *(-1) ;
//         }
//         return ans ; 
//     }
// };
class Solution {
public:
    void recurrsion(string s , int &flag , int n,int &ans , int i){
        if(i >= n){
            return ; 
        } 
        if(flag == 0 ){
            if(s[i] == ' ' ){
                recurrsion(s , flag , n ,ans , i+1 ); 
                return ;
            }
            else if( s[i] == '+' ){
                flag = +1 ; 
                recurrsion(s , flag , n ,ans, i+1 );
                return ;
            }
            else if( s[i] == '-'){
                flag = -1; 
                recurrsion(s , flag , n ,ans, i+1 );
                return ;
            }
            else if( s[i] <= '9' && s[i] >= '0' ){
                flag = 1 ; 
                ans =  s[i]-'0' ; 
                recurrsion(s , flag , n ,ans, i+1 );
                return ; 
            }    
            return ;
        }
        else if(s[i] <= '9' && s[i] >= '0'){
            int x = s[i]-'0' ;
            if(ans > INT_MAX/10 || (ans == INT_MAX/10 && x > 7)){
                if(flag == 1)
                    ans = INT_MAX;
                else 
                    ans = INT_MIN ; 
                return;
            }
            ans = ans*10 + x ;
            recurrsion(s,flag , n ,ans, i+1);
            return ; 
        }
        return ; 
    }
    int myAtoi(string s) {
        int n = s.length();
        int flag = 0 ; 
        int ans = 0 ;
        recurrsion(s , flag , n , ans, 0);
        if(ans == INT_MIN){
            return ans;
        }
        return ans*flag ; 
    }
};