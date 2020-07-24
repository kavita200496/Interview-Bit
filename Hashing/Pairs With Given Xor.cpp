int Solution::solve(vector<int> &A, int B) {
    int result = 0;
    
    unordered_map<int, int> umap;
    for (int i = 0; i < A.size(); i++) {
        int curr = B^A[i];
        
        if (umap.find(curr) != umap.end()) result+= umap[curr];
        umap[A[i]]++;
    }
    
    return result;
}
