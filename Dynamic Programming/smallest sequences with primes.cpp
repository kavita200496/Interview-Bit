https://www.interviewbit.com/problems/smallest-sequence-with-given-primes/

vector<int> Solution::solve(int A, int B, int C, int D) {
    vector<int> res;
    if (D == 0) return res;
    set<int> s;
    
    s.insert(A);
    s.insert(B);
    s.insert(C);
    while (!s.empty()) {
        int curr = *s.begin();
        s.erase(s.begin());
        res.push_back(curr);
        if (res.size() == D) break;
        s.insert(curr*A);
        s.insert(curr*B);
        s.insert(curr*C);
    }
    return res;
}
