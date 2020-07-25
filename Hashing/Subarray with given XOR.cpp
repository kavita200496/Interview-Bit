int Solution::solve(vector<int> &A, int B) {
    int n = A.size();
    int ans = 0;
    if (n == 0) return ans;
    int tmp[n];
    tmp[0] = A[0];
    unordered_map<int, int> umap;
    
    for (int i = 1; i < n; i++) tmp[i] = tmp[i-1]^A[i];
    
    for (int i = 0; i < n; i++) {
        int t = B^tmp[i];
        ans = ans + umap[t];
        if (tmp[i] == B) ans++;
        umap[tmp[i]]++;
    }
    return ans;
}
