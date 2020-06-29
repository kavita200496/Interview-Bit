https://www.interviewbit.com/problems/intersecting-chords-in-a-circle/

int Solution::chordCnt(int A) {
    long long n = 2*A;
    if (n < 3) return 1;
    long long dp[n+1] = {0};
    
    dp[0] = 1;
    dp[2] = 1;
    for (int i = 4; i <= n; i++) {
        for (int j = 0; j < i-1; j += 2) {
            dp[i] = (dp[i] + dp[j]*dp[i-2-j])%1000000007;
        }
    }
    return dp[n]%1000000007;
}
