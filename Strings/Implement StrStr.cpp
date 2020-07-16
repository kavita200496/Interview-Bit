int Solution::strStr(const string A, const string B) {
    if (A.size() < B.size()) return -1;
    int i = 0;
    int n = A.size(), m = B.size();
    
    if (A == B) return 0;
    int ret = -1;
    
    for (i; i <= n-m; i++) {
        if (A[i] == B[0]) {
            bool flag = true;
            
            for (int j = i; j < (i+m); j++) {
                if (A[j] != B[j-i]) {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                ret = i;
                break;
            }
        }
    }
    return ret;
}
