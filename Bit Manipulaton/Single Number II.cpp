https://www.interviewbit.com/problems/single-number-ii/

int Solution::singleNumber(const vector<int> &A) {
    int one = 0;
    int two = 0;
    int three = 0;
    
    for (int i = 0; i < A.size(); i++) {
        int x = A[i];
        two |= one & x;
        one ^= x;
        three = ~(one & two);
        one &= three;
        two &= three;
    }
    return one;
}
