https://www.interviewbit.com/problems/pascal-triangle/

vector<vector<int> > Solution::solve(int A) {
    vector<vector<int>> res;
    vector<int> t;
    if (A == 0) return res;
    t.push_back(1);
    res.push_back(t);
    if (A == 1) {
         return res;
    }
    t.push_back(1);
    res.push_back(t);
    if (A == 2)
        return res;
    
    for (int i = 2; i < A; i++) {
        vector<int> tmp;
        tmp.push_back(1);
        for (int j = 1; j < i; j++) {
            tmp.push_back(res[i-1][j-1] + res[i-1][j]);
        }
        tmp.push_back(1);
        res.push_back(tmp);
    }
    return res;
}
