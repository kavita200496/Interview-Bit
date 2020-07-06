https://www.interviewbit.com/problems/roman-to-integer/

int val(char c) {
    if (c == 'I') return 1;
    if (c == 'V') return 5;
    if (c == 'X') return 10;
    if (c == 'L') return 50;
    if (c == 'C') return 100;
    if (c == 'D') return 500;
    if (c == 'M') return 1000;
    return 0;
}

int Solution::romanToInt(string A) {
    int n = A.size();
    int res = 0;
    for (int i = 0; i < n; i++) {
        int s1 = val(A[i]);
        if (i+1 < n) {
            int s2 = val(A[i+1]);
            if (s1 >= s2) res += s1;
            else {
                res += s2-s1;
                i++;
            }
        } else res += s1;
    }
    return res;
}
