https://www.interviewbit.com/problems/nearest-smaller-element/

vector<int> Solution::prevSmaller(vector<int> &A) {
    int n = A.size();
    vector<int> res;
    if (n == 0) return res;
    stack<int> s;
    res.push_back(-1);
    s.push(A[0]);
    
    for (int i = 1; i < n; i++) {
        if (s.empty()) 
            res.push_back(-1);
        else if (A[i] > s.top()) 
            res.push_back(s.top());
        else {
            while (!s.empty() && A[i] <= s.top()) s.pop();
            if (s.empty()) res.push_back(-1);
            else if (A[i] > s.top()) res.push_back(s.top());
        }
        s.push(A[i]);
    }
    return res;
}
