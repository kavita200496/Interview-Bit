https://www.interviewbit.com/problems/largest-continuous-sequence-zero-sum/

vector<int> Solution::lszero(vector<int> &A) {
    vector<int> res;
    int start = -1;
    int end = -1;
    int n = A.size();
    int sum = 0;
    int max_len = INT_MIN;

    unordered_map<int, int> ump;
    ump[0] = -1;
    for (int i = 0; i < n; i++) {
        sum += A[i];
        if (ump.find(sum) != ump.end()) {
            if (max_len < i-ump[sum]) {
                start = ump[sum] + 1;
                end = i;
                max_len = i-ump[sum];
            }
        } else ump[sum] = i;
    }
    if (start >= 0 && end >= 0) {
        for (int i = start; i <= end; i++) 
            res.push_back(A[i]);
    }
    return res;
}
