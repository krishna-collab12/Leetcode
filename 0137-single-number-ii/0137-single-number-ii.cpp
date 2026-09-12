class Solution{	
public:		
	int singleNumber(vector<int>& nums) {
        int ones = 0 ;
        int twos = 0 ;
        int n = nums.size();
        //Here XOR manages that if it is x times present then remove or not then include it 
        for(int i = 0 ; i<n ; i++){
            // AND is used to check if it is not present more then two 
            ones = (ones ^ nums[i]) & ~twos;
            //And is used to check if it is present somewhere less or more 
            twos = (twos ^ nums[i]) & ~ones;
        } 
        return ones ;
		//your code goes here
	}
};