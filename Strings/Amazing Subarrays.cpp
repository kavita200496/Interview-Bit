int Solution::solve(string A) {
    int n = A.size();
    int count = 0;
    
    for (int i = 0; i < n; i++) {
        if (A[i] == 'a'||A[i] == 'u'||A[i] == 'o'||A[i] == 'i'||A[i] == 'e'
        ||A[i] == 'U'||A[i] == 'O'||A[i] == 'I'||A[i] == 'E'||A[i] == 'A') {
            count = (count + n-i)%10003;
        }
    }
    return count;
}
