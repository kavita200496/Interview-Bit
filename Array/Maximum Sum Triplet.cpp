https://www.interviewbit.com/problems/maximum-sum-triplet/

int get(set<int>& low, int& n) {
    auto it = low.lower_bound(n);
    --it;
    
    return (*it);
}

int Solution::solve(vector<int> &A) {
    int n = A.size();
    int suff[n+1];
    suff[n] = 0;
    
    for (int i = n-1; i >= 0; i--)
        suff[i] = max(suff[i+1], A[i]);
        
    int ans = 0;
    set<int> low;
    
    low.insert(INT_MIN);
    
    for (int i = 0; i < n-1; i++) {
        if (suff[i+1] > A[i]) {
            ans = max(ans, get(low, A[i])+A[i]+suff[i+1]);
            low.insert(A[i]);
        }
    }
    return ans;
}
