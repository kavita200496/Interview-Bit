vector<int> Solution::solve(vector<int> &A, vector<int> &B, vector<int> &C) {
    unordered_set<int> a;
    unordered_set<int> b;
    unordered_set<int> c;
    
    for (auto i : A) a.insert(i);
    for (auto i : B) {
        if (a.find(i) != a.end()) c.insert(i);
        else b.insert(i);
    }
    vector<int> res;
    for (auto i : C) {
        if (a.find(i) != a.end()) c.insert(i);
        else if (b.find(i) != b.end()) c.insert(i);
    }
    for (auto i : c) res.push_back(i);
    sort(res.begin(), res.end());
    return res;
}
