https://www.interviewbit.com/problems/simplify-directory-path/

string Solution::simplifyPath(string A) {
    string res = "/";
    stack<string> s;
    string dir;
    int n = A.size();
    
    for (int i = 0; i < n; i++) {
        dir.clear();
        while (A[i] == '/') i++;
        while (i < n && A[i] != '/') {
            dir.push_back(A[i]);
            i++;
        }
        if (dir.compare("..") == 0) {
            if (!s.empty()) s.pop();
        }
        else if (dir.compare(".") == 0) continue;
        else if (dir.size() != 0) s.push(dir);
    }
    
    stack<string> s1;
    while (!s.empty()) {
        s1.push(s.top());
        s.pop();
    }
    
    while (!s1.empty()) {
        string tmp = s1.top();
        if (s1.size()!= 1) res += tmp + "/";
        else res += tmp;
        s1.pop();
    }
    return res;
}
