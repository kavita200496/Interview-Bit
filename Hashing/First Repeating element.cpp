int Solution::solve(vector<int> &A) {
    unordered_map<int, int> umap;
    int s = INT_MAX;
    
    for (int i = 0; i < A.size(); i++) {
        if (umap.find(A[i]) != umap.end()) {
            s = min(umap[A[i]], s);
        } else umap[A[i]] = i;
    }
    if (s == INT_MAX) return -1;
    return A[s];
}
