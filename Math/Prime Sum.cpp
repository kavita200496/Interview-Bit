https://www.interviewbit.com/problems/prime-sum/

bool prime(int n) {
    for (int i = 2; i*i <= n; i++) {
        if (n%i == 0) return false;
    }
    return true;
}
vector<int> Solution::primesum(int A) {
    vector<int> res;
    for (int i = 2; i <= A; i++) {
        if (prime(i) && prime(A-i)) {
            res.push_back(i);
            res.push_back(A-i);
            break;
        }
    }
    return res;
}
