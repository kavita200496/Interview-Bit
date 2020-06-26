https://www.interviewbit.com/problems/min-steps-in-infinite-grid/

int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int a = A.size();
    
    int ans = 0;
    
    for (int i = 0; i < a-1; i++) {
        ans += max(abs(A[i]-A[i+1]), abs(B[i]-B[i+1]));    
    }
    return ans;
}
