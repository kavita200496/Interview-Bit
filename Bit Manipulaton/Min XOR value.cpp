https://www.interviewbit.com/problems/min-xor-value/

int Solution::findMinXor(vector<int> &A) {
    int res = INT_MAX;
    if (A.size() > 0) {
        sort (A.begin(), A.end());
        for (int i = 0; i < A.size()-1; i++)
            res = min(res, A[i]^A[i+1]);
    }
    return res;
}
