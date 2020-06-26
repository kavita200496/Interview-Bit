https://www.interviewbit.com/problems/max-sum-contiguous-subarray/

int Solution::maxSubArray(const vector<int> &A) {
    int ans = INT_MIN;
    int curr = 0;
    for (int i = 0; i < A.size(); i++) {
        curr += A[i];
        ans = max(ans, curr);
        if (curr < 0) curr = 0;
    }
    return ans;
}
