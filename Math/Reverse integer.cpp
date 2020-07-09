https://www.interviewbit.com/problems/reverse-integer/

int Solution::reverse(int A) {
    int sign = 1;
    if (A < 0) {
        A = -A;
        sign = -1;
    }
    if (A > INT_MAX || A < INT_MIN) return 0;
    long long res = 0;
    while (A) {
        res = res*10 + A%10;
        if (sign*res > INT_MAX || sign*res < INT_MIN) return 0;
        A = A/10;
    }
    return sign*res;
}
