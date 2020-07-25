vector<int> Solution::solve(vector<int> &A) {
    unordered_map<int, int> umap;
    
    for (int i = 0; i < A.size(); i++) {
        if (umap.find(A[i]) != umap.end()) {
            int t = umap[A[i]];
            umap.erase(A[i]);
            umap[A[i]+1] = t;
            
        } 
        umap[A[i]]= i;
    }
    
    for(auto i : umap) {
        A[i.second] = i.first;
    }
    return A;
}
