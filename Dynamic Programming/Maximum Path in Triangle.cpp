https://www.interviewbit.com/problems/maximum-path-in-triangle/

int Solution::solve(vector<vector<int> > &A) {
    int n = A.size();
    if (n == 0) return 0;
    
    for (int r = n-2; r >= 0; r--) {
        for (int c = 0; c <= r; c++) {
            if (c == 0) A[r][c] += max(A[r+1][c], A[r+1][c+1]);
            else if (c == n-1) A[r][c] += A[r+1][c];
            else A[r][c] += max(A[r+1][c], A[r+1][c+1]);
        }
    }
    return A[0][0];
}
