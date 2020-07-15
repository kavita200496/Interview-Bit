int Solution::solve(vector<int> &A, int B) {
    priority_queue<int> maxheap;
    int res = 0;
    
    for (int i = 0; i < A.size(); i++) {
        maxheap.push(A[i]);
    }
    
    while (B-- && maxheap.size() > 0) {
        res += maxheap.top();
        int tmp = maxheap.top();
        tmp = tmp-1;
        maxheap.pop();
        if (tmp > 0) {
        maxheap.push(tmp);}
    }
    return res;
}
