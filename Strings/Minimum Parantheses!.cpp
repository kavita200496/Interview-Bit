https://www.interviewbit.com/problems/minimum-parantheses/

int Solution::solve(string A) {
    int n = A.size();
    stack<char> s;
    int i = 0;
    int count = 0;

    
    while (i < n) {
        if (A[i] == ')') {
            if (s.empty()) count++;
            else s.pop();
        } else s.push('(');
        i++;
    }
    
    while (!s.empty()) {
        count++;
        s.pop();
    }
    return count;
}
