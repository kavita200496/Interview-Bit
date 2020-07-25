vector<int> Solution::twoSum(const vector<int> &A, int B) {
    vector<int> res;
    unordered_map<int, int> umap;
    
    for (int i = 0; i < A.size(); i++) {
        
        if (umap.find(B-A[i]) != umap.end()) {
            res.push_back(umap[B-A[i]]+1);
            res.push_back(i+1);
            break;
        } else {
            if (umap.find(A[i]) == umap.end()) umap[A[i]] = i;
        }
    }
    return res;
}
