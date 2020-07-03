https://www.interviewbit.com/problems/tiling-with-dominoes/

int Solution::solve(int A) {
    if (A < 2) return 0;
    long long m[A+1];
    long long n[A+1];
    m[0] = 1, m[1] = 0, n[0] = 0, n[1] = 1;
    
    for (int i = 2; i <= A; i++) {
        m[i] = (m[i-2] + 2*n[i-1])%1000000007;
        n[i] = (n[i-2] + m[i-1])%1000000007;
    }
    return m[A]%1000000007;
}
