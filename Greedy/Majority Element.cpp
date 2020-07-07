https://www.interviewbit.com/problems/majority-element/

int Solution::majorityElement(const vector<int> &A) {
    int n = A.size();
    int majority = 0;
    
    for (int count = 1, i = 1; i < n; i++) {
        A[majority] == A[i] ?count++:count--;
        if (count == 0) {
            majority = i;
            count = 1;
        }
    }
    return A[majority];
}
