https://www.interviewbit.com/problems/next-permutation/

vector<int> Solution::nextPermutation(vector<int> &A) {
    int n = A.size();
    
    int i = -1, j = 0;
    for (i = n-2; i >= 0; i--) {
        if (A[i] < A[i+1]) break;
    }
    if (i == -1) {
        reverse(A.begin(), A.end());
        return A;
    }
    
    for (j = n-1; j > i; j--) {
        if (A[j] > A[i]) break;
    }
    swap(A[j], A[i]);
    reverse(A.begin()+i+1, A.end());
    return A;
}
