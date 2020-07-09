https://www.interviewbit.com/problems/array-3-pointers/

int Solution::minimize(const vector<int> &A, const vector<int> &B, const vector<int> &C) {
    int i = 0, j = 0, k = 0;
    int res = INT_MAX;
    int tmp1, tmp, tmp2, tmp3;
    
    while (i < A.size() || j < B.size() || k < C.size()) {
        res = min(res, max(abs(A[i]-B[j]), max(abs(B[j]-C[k]), abs(A[i]-C[k]))));
        if (i+1 < A.size()) {
            tmp1 = max(abs(A[i+1]-B[j]), max(abs(A[i+1]-C[k]), abs(B[j]-C[k])));
        } else tmp1 = INT_MAX;
        if (j+1 < B.size()) {
            tmp2 = max(abs(A[i]-B[j+1]), max(abs(A[i]-C[k]), abs(B[j+1]-C[k])));
        } else tmp2 = INT_MAX;
        if (k+1 < C.size()) {
            tmp3 = max(abs(A[i]-B[j]), max(abs(A[i]-C[k+1]), abs(B[j]-C[k+1])));
        } else tmp3 = INT_MAX;
        
        tmp = min(tmp1, min(tmp2, tmp3));
        if (tmp == INT_MAX) return res;
        else if (tmp == tmp1) i++;
        else if (tmp == tmp2) j++;
        else k++;
    }
    
    return res;
}
