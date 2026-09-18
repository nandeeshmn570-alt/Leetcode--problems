class Solution {
public:
    vector<vector<int>> cyclicShift(int n, vector<vector<int>>& grid, vector<int>& rowShift, vector<int>& colShift) {
       
         vector<vector<int>>temp(n,vector<int>(n));
         for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int k = rowShift[i];
                int newColumn = (j-k+n)%n;
                temp[i][newColumn]=grid[i][j];
            }
         }

         for(int i=0;i<n;i++){
            int k = colShift[i];
            for(int j=0;j<n;j++){
                 int newRow =(j-k+n)%n;
                 grid[newRow][i]=temp[j][i];
            }
         }
         return grid;
    }
};