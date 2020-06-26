https://www.interviewbit.com/problems/min-sum-path-in-matrix/

int Solution::minPathSum(vector<vector<int> > &A) {
    int r = A.size();
    if (r == 0) return 0;
    int c = A[0].size();
    
    vector<vector<int>> dp(r, vector<int>(c, 0));
    dp[0][0] = A[0][0];
    for (int i = 1; i < c; i++) dp[0][i] = dp[0][i-1]+A[0][i];
    for (int i = 1; i < r; i++) dp[i][0] = dp[i-1][0]+A[i][0];
    
    for (int i = 1; i < r; i++) {
        for (int j = 1; j < c; j++) {
            dp[i][j] = min(dp[i-1][j], dp[i][j-1]) + A[i][j];
        }
    }
     
    
     
    return dp[r-1][c-1];
}
