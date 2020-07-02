https://www.interviewbit.com/problems/kth-row-of-pascals-triangle/

vector<int> Solution::getRow(int A) {
    vector<vector<int>> res;
    vector<int> t;

    t.push_back(1);
    res.push_back(t);
    if (A == 0) {
         return t;
    }
    t.push_back(1);
    res.push_back(t);
    if (A == 1)
        return res[1];
    
    for (int i = 2; i <= A; i++) {
        vector<int> tmp;
        tmp.push_back(1);
        for (int j = 1; j < i; j++) {
            tmp.push_back(res[i-1][j-1] + res[i-1][j]);
        }
        tmp.push_back(1);
        res.push_back(tmp);
    }
    return res[A];
}
