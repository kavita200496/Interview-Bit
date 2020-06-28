https://www.interviewbit.com/problems/maxspprod/

int Solution::maxSpecialProduct(vector<int> &A) {
    long long n = A.size();
    if (n <= 3) return 0;
    long long i = 0;
    long long j = 0;
    long long l = 0, r = 0;
    bool flag = false;
    long long ans = 0;
    
    for (i = 1; i < n-1; i++) {
         
            if (A[j]>A[i]) {
                l = j;
                flag = true;
            }
             if (A[i-1] > A[i]) {
                j = i-1;
                l = j;
                flag = true;
            }
         if (!flag) j = j+1;
         if (A[i+1] > A[i]) r = i+1;
         if (ans < (l*r)) ans = (l*r);
         l = 0;
         r = 0;
         flag = false;
    }
    return int(ans%1000000007);
}
