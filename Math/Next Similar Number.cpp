https://www.interviewbit.com/problems/next-similar-number/

string Solution::solve(string A) {
    int n = A.size();
    int i;
    for (i = n-1; i > 0; i--) {
        if (A[i] > A[i-1]) break;
    }
   if (i == 0) return "-1";
        
    int swap_idx = n-1, change_idx = i-1;
    for (int j = n-1; j > change_idx; j--) {
        if (A[j] > A[change_idx]) {
            swap_idx = j;
            break;
        }
    }
    swap(A[change_idx], A[swap_idx]);
    reverse(A.begin()+change_idx+1, A.end());
    
    return A;    
}
