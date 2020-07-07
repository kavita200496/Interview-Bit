https://www.interviewbit.com/problems/meeting-rooms/

int Solution::solve(vector<vector<int> > &A) {
    priority_queue<int, vector<int>, greater<int>> minheap;
    sort(A.begin(), A.end());
    int n = A.size();
    if (n < 2) return n;
    
    minheap.push(A[0][1]);
    for (int i = 1; i < n; i++) {
        if (A[i][0] >= minheap.top()) minheap.pop();
        minheap.push(A[i][1]);
    }
    return minheap.size();
}
