https://www.interviewbit.com/problems/chain-of-pairs/

int Solution::solve(vector<vector<int> > &A) {
    int n = A.size();
    if (n < 2) return n;
    
    int dp[n];
    for (int i = 0; i < n; i++) {
        dp[i] = 1;
        for (int j = 0; j < i; j++) {
            if (A[i][0] > A[j][1] && dp[i] < dp[j] + 1)
                dp[i] = dp[j]+1;
        }
    }
    return *max_element(dp, dp+n);
}
