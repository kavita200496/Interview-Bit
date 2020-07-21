int Solution::numDistinct(string A, string B) {
    int n = A.size();
    int m = B.size();
    if (m > n) return 0;
    if (m == n && A == B) return 1;
    if (m == n && A != B) return 0;
    
    int dp[m+1][n+1];
    for (int i = 0; i <= n; i++) dp[0][i] = 1;
    for (int i = 1; i <= m; i++) dp[i][0] = 0;
    
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (A[j-1] != B[i-1]) dp[i][j] = dp[i][j-1];
            else dp[i][j] = dp[i-1][j-1]+dp[i][j-1];
        }
    }
    
    return dp[m][n];
}
