vector<int> Solution::solve(vector<vector<int> > &A) {
    priority_queue<int, vector<int>, greater<int>> minheap;
    
    for (int i = 0; i < A.size(); i++) {
        for (int j = 0; j < A[i].size(); j++) {
            minheap.push(A[i][j]);
        }
    }
    vector<int> res;
    
    while (!minheap.empty()) {
        res.push_back(minheap.top());
        minheap.pop();
    }
    return res;
}
