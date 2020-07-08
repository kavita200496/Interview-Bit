https://www.interviewbit.com/problems/max-continuous-series-of-1s/

vector<int> Solution::maxone(vector<int> &A, int B) {
    int l = 0, r = 0;
    int zero_count = 0;
    int res = 0;
    int start = 0, end = 0;
    int n = A.size();
    
    while (r < n) {
        if (zero_count <= B) {
            if (A[r] == 0) zero_count++;
            r++;
        } if (zero_count > B) {
            if (A[l] == 0) zero_count--;
            l++;
        }
        if ((r-l > res) && (zero_count <= B)) {
            res = r-l;
            start = l;
            end = r;
        }
    }
    vector<int> result;
    for (int i = start; i < end; i++) {
            result.push_back(i);
    }
    return result;
}
