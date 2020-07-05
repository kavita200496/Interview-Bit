https://www.interviewbit.com/problems/first-non-repeating-character-in-a-stream-of-characters/

string Solution::solve(string A) {
    int n = A.size();
    queue<char> q;
    int ch[26] = {0};
    string res = "";
    
    for (int i = 0; i < n; i++) {
        q.push(A[i]);
        
        ch[A[i]-'a']++;
        while (!q.empty()) {
            if (ch[q.front()-'a'] > 1) q.pop();
            else {
                res += q.front();
                break;
            }
        }
        if (q.empty()) res += '#';
    }
    return res;
}
