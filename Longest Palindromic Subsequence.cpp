https://www.interviewbit.com/problems/longest-palindromic-subsequence/

int Solution::solve(string A) {
    int n = A.size();
    if (n < 2) return n;
        
        vector<vector<int>> dp(n, vector<int>(n, 0));
        
        for (int i = 0; i < n; i++) dp[i][i] = 1;
        
        for (int i = 2; i <= n; i++) {
            for (int j = 0; j < n-i+1; j++) {
                int k = i+j-1;
                if (A[j] == A[k] && i == 2) dp[j][k] = 2;
                else if (A[j] == A[k]) dp[j][k] = dp[j+1][k-1] + 2;
                else dp[j][k] = max(dp[j][k-1], dp[j+1][k]);
            }
        }
        return dp[0][n-1];
}
