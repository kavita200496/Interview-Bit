vector<int> Solution::solve(vector<int> &A, int B) {
    vector<int> res;
    priority_queue<int> maxheap;
    
    for (int i = 0; i < A.size(); i++) {
        maxheap.push(A[i]);
    }
    
    while (B--) {
        res.push_back(maxheap.top());
        maxheap.pop();
    }
    return res;
}
