class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int n = bills.size();
        int bills_5 = 0 ;
        int bills_10 = 0 ;
        for(int i = 0 ; i< n ; i++ ){
            if(bills[i] == 5 ){
                bills_5++ ;
            }
            else if(bills[i] == 10 ){
                if(!bills_5){
                    return false ;
                }
                bills_5--;
                bills_10++ ; 
            }
            else {
                if(!bills_10){
                    if(bills_5 >= 3){
                        bills_5 = bills_5 - 3 ; 
                    }
                    else 
                    return 0 ; 
                }
                else{
                    bills_10-- ; 
                    if(!bills_5){
                        return 0 ;
                    }
                    else{
                        bills_5-- ; 
                    }
                }
            }
        }
        return 1 ;
    }
};