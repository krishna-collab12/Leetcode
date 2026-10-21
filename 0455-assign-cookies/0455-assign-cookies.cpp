class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int n = g.size();
        int m = s.size();
        int count = 0 ;
        for(int i = 0 , j = 0 ; i<n && j<m ; j++){
            if(g[i]<=s[j]){
                i++;
                count++ ;
            }
        }
        return count ; 
        
    }
};