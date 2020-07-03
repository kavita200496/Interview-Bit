https://www.interviewbit.com/problems/maximum-size-square-sub-matrix/

int Solution::solve(vector<vector<int> > &A) {
    int ans = 1;
    int r = A.size();
    if (r == 0) return 0;
    int c = A[0].size();
    
    for (int i = 1; i < r; i++) {
        for(int j= 1; j < c; j++) {
            if (A[i][j] == 1) {
                A[i][j] = min(A[i-1][j-1], min(A[i-1][j], A[i][j-1])) + 1;
                ans = max(ans, A[i][j]);
            }
        }
    }
    return (ans*ans)%1000000007;
}
