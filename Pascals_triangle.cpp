class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>pascals_triangle;
      
        int i=0; while(i<numRows){
            vector<int>tmp(i+1,1);
          
            int j=1; while(j<i){
                tmp[j]=pascals_triangle[i-1][j]+pascals_triangle[i-1][j-1];
                j++;
            }pascals_triangle.push_back(tmp); i++;
        }return pascals_triangle;
    }
};
