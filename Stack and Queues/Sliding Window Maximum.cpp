https://www.interviewbit.com/problems/sliding-window-maximum/

vector<int> Solution::slidingMaximum(const vector<int> &A, int B) {
    int n = A.size();
    vector<int> res;
    deque<int> dq;
    
    for (int i = 0; i < n; i++) {
        if (!dq.empty() && dq.front() == i-B) dq.pop_front();
        while (!dq.empty() && A[i] >= A[dq.back()]) dq.pop_back();
        dq.push_back(i);
        
        if (i >= B-1) res.push_back(A[dq.front()]);
    }
    return res;
}
