bool palin(string A, int l, int h) {
    while (h > l) {
        if (A[l++] != A[h--]) return false;
    }
    return true;
}

int check(string A) {
    int freq[256] = {0};
    int n = A.size();
    
    for (int i = 0; i < n; i++) {
        freq[A[i]]++;
        if (freq[A[i]] > 2) return true;
    }
    int k = 0;
    for (int i = 0; i < n; i++) {
        if (freq[A[i]] > 1) A[k++] = A[i];
    }
    A[k] = '\0';
    
    if (palin(A, 0, k-1)) {
        if (k &1) return A[k/2] == A[k/2-1];
        else return 0;
    }
    return 1;
}

int Solution::anytwo(string A) {
    if (check(A)) return 1;
    else return 0;
}
