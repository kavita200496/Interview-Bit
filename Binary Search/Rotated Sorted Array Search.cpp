https://www.interviewbit.com/problems/rotated-sorted-array-search/

int Solution::search(const vector<int> &A, int B) {
    int n = A.size();
    if (n == 0) return -1;
    int l = 0, h = n-1;
    
    while (l <= h) {
        if (A[l] == B) return l;
        if (A[h] == B) return h;
        int mid = l + (h-l)/2;
        if (A[mid] == B) return mid;
        if (A[l] < A[mid]) {
            if (A[l] < B &&  A[mid] > B) h = mid-1;
            else l = mid+1;
        } else {
            if (A[mid] < B && A[l] > B) l = mid+1;
            else h = mid-1;
        }
    }
    return -1;
}
