https://www.interviewbit.com/problems/redundant-braces/

int Solution::braces(string A) {
    stack<char> s;
    int n = A.size();
    int i = 0;
    
    while (i < n) {
        if (A[i] == '(' || A[i] == '+' || A[i] == '-' || A[i] == '*' || A[i] == '/')
            s.push(A[i]);
        else if (A[i] == ')') {
            if (s.top() == '(') return 1;
            else {
                while (!s.empty() && s.top() != '(') s.pop();
            }
            s.pop();
        }
        i++;
    }
    return 0;
}
