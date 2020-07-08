https://www.interviewbit.com/problems/intersection-of-sorted-arrays/

vector<int> Solution::intersect(const vector<int> &A, const vector<int> &B) {
    vector<int> res;
    
    int n = A.size();
    int m = B.size();
    if (n == 0 || m == 0) return res;
    int i = 0, j = 0;
    
    while (i < n && j < m) {
        if (A[i] == B[j]) {
            res.push_back(A[i]); 
            i++; j++;
        } else if (A[i] < B[j]) i++;
        else if (B[j] < A[i]) j++;
    }
    return res;
}
