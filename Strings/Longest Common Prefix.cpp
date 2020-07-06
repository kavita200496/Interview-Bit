https://www.interviewbit.com/problems/longest-common-prefix/

string Solution::longestCommonPrefix(vector<string> &A) {
    string res = "";
    
    int n = A.size();
    if (n == 0) return res;
    if (n == 1) return A[0];
    
    for (int i = 0; i < A[0].size(); i++) {
        char c = A[0][i];
        for (int j = 1; j < n; j++) {
            if (i == A[j].size() || A[j][i] != c) {
                return res;
            }
        }
        res += c;
    }
    return res;
}
