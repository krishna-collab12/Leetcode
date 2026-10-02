class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> temp ; 
        vector<int> temp2 ; 
        temp2={1};
        for(int i=0 ; i < rowIndex ; i++ ){
            temp = temp2 ;
            temp2.clear();
            temp2.push_back(1);
            for(int j = 1 ; j< temp.size();j++){
                int b = temp[j]+temp[j-1] ;
                temp2.push_back(b);
            }
            temp2.push_back(1);
        }
        return temp2; 
    }
};