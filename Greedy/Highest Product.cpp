https://www.interviewbit.com/problems/highest-product/

int Solution::maxp3(vector<int> &A) {
    int n = A.size();
    if (n == 0) return 0;
    if (n == 1) return (A[0]*A[0]*A[0])%1000000007;
    if (n == 2) return (A[0]*A[1]*max(A[0],A[1]))%1000000007;
    sort(A.begin(), A.end());
    
    int ans1 = A[n-1]*A[n-2]*A[n-3];
    int ans2 = A[0]*A[1]*A[n-1];
    
    return max(ans1, ans2);
}
