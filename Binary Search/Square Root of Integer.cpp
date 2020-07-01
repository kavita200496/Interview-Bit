https://www.interviewbit.com/problems/square-root-of-integer/

int Solution::sqrt(int A) {
    if (A == 1) return 1;
    long long l = 0, h = A/2;
    
    while (l <= h) {
        long long mid = l+(h-l)/2;
        if (mid*mid <= A && (mid+1)*(mid+1) > A) return mid;
        if (mid*mid > A) h = mid-1;
        else l = mid+1;
    }
    return 0;
}
