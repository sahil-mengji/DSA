class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();

        if (obstacleGrid[0][0] == 1 || obstacleGrid[m-1][n-1] == 1) 
            return 0;
            
        vector<vector<int>> a(m, vector<int>(n, 0));
        a[0][0] = 1;

        for (int i = 1; i < m; i++) 
            a[i][0] = obstacleGrid[i][0] == 1 ? 0 : a[i-1][0];

        for (int j = 1; j < n; j++) 
            a[0][j] = obstacleGrid[0][j] == 1 ? 0 : a[0][j-1];

        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                if (obstacleGrid[i][j] == 1) a[i][j] = 0;
                else a[i][j] = a[i-1][j] + a[i][j-1];
            }
        }
        return a[m-1][n-1];
    }
};
