class Solution {
public:
    void operators(vector<string>& ans, string& num, int target,long long int temp ,string a, int i, int n ,long long int prev ) {
        if(i == n) {
            if (temp == target) {
                ans.push_back(a);
            }
            return;
        }
        string x ; 
        long long int abc = 0 ; 
        int check = i ;
        while(i<n){
            x = x + num[i];
            abc = abc*10 + (int)(num[i++] - '0') ;
            operators(ans, num, target , temp + abc, a + '+' + x , i , n , abc );
            operators(ans, num, target , temp - abc, a + '-' + x , i , n , -abc);
            operators(ans, num, target , temp - prev + prev*abc , a + '*' + x , i , n , prev*abc );
            if(num[check] == '0')
            break ;
        }    
    }

    vector<string> addOperators(string num, int target) {
        vector<string> ans;
        int n = num.length();
        string a ;
        int i = 0 ;
        long long int temp = 0 ; 
        while(i<n){
            a = a + num[i];
            temp = temp*10 + (int)(num[i++] - '0'); 
            operators(ans, num, target , temp , a , i, n ,temp );
            if(num[0] == '0')
            break ;
        }
        return ans ; 
    }
};