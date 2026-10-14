// class Solution {
// public:
//     int fx(vector<int> &nums , int left , int right ,int n ){
//         if ( 0<=left && left<right &&right<n){
//             int mult = 1;
//             int mul1 =1 ;
//             int mul2 =1 ;
//             for(int i=left; i<=right ;i++){
//                 mult *= nums[i];
//                 if( mult<0 ){
//                     mul1 *= nums[i];
//                 }
//                 else{
//                     mul1=1;
//                 }               
//                 if( mul2 > 0 ){
//                     mul2 *=nums[i];
//                 }
//             }
//             if(mult<0 ){
//                 int x = maxi( mul1 , mul2 );
//                 mult = mult / x ; 
//             }
//             return mult ;
//         }
//         else if( left == right ){
//             return nums[left] ;
//         }
//         else {
//             return 0 ;
//         }
//     }
//     int maxProduct(vector<int>& nums) {
//         int ans = INT_MIN;
//         int n=nums.size();
//         int x=0;

//         for(int i=0 ; i< n ; i++){
//             if(nums[i]==0){
//                 ans=maxi(ans,fx( nums ,x, i-1,n ) );
//                 x=i+1;
//                 ans=maxi(ans,0);
//             }
//         }

//         ans=maxi(ans , fx(nums ,x, n-1 ,n) ) ;
//         return ans;
//     }
// };
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi = nums[0];
        int mini = nums[0];
        int ans = nums[0];
        int n=nums.size();
        
        for(int i = 1 ; i < n ; i++){
            if( nums[i]<0 ){
                int temp = maxi ;
                maxi = max(mini*nums[i], nums[i]);
                mini = min(temp*nums[i], nums[i]);
            }
            else{
                maxi = max(maxi*nums[i] , nums[i]);
                mini = min(mini*nums[i], nums[i]);
            }
            ans = max(ans,maxi) ; 
        }
        ans = max(ans,maxi) ; 
        return ans;
    }
};