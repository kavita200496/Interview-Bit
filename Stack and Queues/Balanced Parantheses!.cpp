https://www.interviewbit.com/problems/balanced-parantheses/

int Solution::solve(string A) {
    int n = A.size();
    if (n == 0) return 1;
    if (A[0] == ')' || n%2 != 0) return 0;
    stack<char> s;
    
    for (int i = 0; i < n; i++) {
        if (A[i] == '(') s.push(A[i]);
        else {
            if (s.empty()) return 0;
            else s.pop();
        }
    }
    if (s.empty()) return 1;
    return 0;
}
