https://www.interviewbit.com/problems/greatest-common-divisor/

int Solution::gcd(int A, int B) {
    if (A == 0) return B;
    if (B == 0) return A;
    if (A > B) return gcd(A-B, B);
    else return gcd(A, B-A);
}
