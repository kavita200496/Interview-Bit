https://www.interviewbit.com/problems/matrix-search/

int Solution::searchMatrix(vector<vector<int> > &A, int B) {
    int n = A.size();
    if (n == 0) return 0;
    int m = A[0].size();
    if (m == 0) return 0;
    
    int l = 0, h = n-1;
    while (l <= h) {
        int mid = l + (h-l)/2;
        if (A[mid][0] == B) return 1;
        if (A[mid][0] > B) h = mid-1;
        else l = mid+1;
    }
    if (l <= 0) return 0;
    l = l-1;
    int left = 0, r = A[l].size()-1;
    while (left <= r) {
        int mid = left + (r-left)/2;
        if (A[l][mid] == B) return 1;
        if (A[l][mid] > B) r = mid-1;
        else left = mid + 1;
    }
    return 0;
}
