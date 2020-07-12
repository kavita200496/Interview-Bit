https://www.interviewbit.com/problems/subset/

void findsubset(vector<int>& A, vector<int> tmp, int curr, vector<vector<int>>& res) {
    int n = A.size();
    res.push_back(tmp);
    
    if (curr == n) return;
    for (int i = curr; i < n; i++) {
        vector<int> tmp1(tmp);
        tmp1.push_back(A[i]);
        findsubset(A, tmp1, i+1, res);
    }
}

vector<vector<int> > Solution::subsets(vector<int> &A) {
    int n = A.size();
    vector<vector<int>> res;
    vector<int> tmp;
    sort(A.begin(), A.end());
    
    findsubset(A, tmp, 0, res);
    return res;
}
