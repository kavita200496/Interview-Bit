https://www.interviewbit.com/problems/remove-consecutive-characters/

string Solution::solve(string A, int B) {
    int n = A.size();
    if (n < B || B == 0) return A;
    queue<char> q;
    
    for (int i = 0; i < n; i++) {
        
                int count = 0; int j = i;

        while (A[i] == A[j]) {
            count++;
            if (count > B) break;
            j++;
            if (j >= n) break;
        }
        if (count <= B) j--;
       // cout<<count<<endl;
        if (count != B) {
            while (i != j+1 && j < n) {
                q.push(A[i]);
                i++;
            }
            
        }
        i = j;
    }
    string res = "";
    while (!q.empty()) {
        res += q.front();
        q.pop();
    }
    return res;
}
