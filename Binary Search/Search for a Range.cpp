https://www.interviewbit.com/problems/search-for-a-range/

vector<int> Solution::searchRange(const vector<int> &A, int B) {
    int n = A.size();
    vector<int> res(2, -1);
    if (n == 0) return res;
    int l = 0, h = n-1;
    
    while (l <= h) {
        int mid = l + (h-l)/2;
        if (A[mid] == B) {
            int t = mid;
            while (t-1 >= l && A[t-1] == A[t]) t--;
            res[0] = t;
            t = mid;
            while (t+1 <= h && A[t+1] == A[t]) t++;
            res[1] = t;
            return res;
        } if (A[mid] > B) h = mid-1;
        else l = mid+1;
    }
    return res;
}
