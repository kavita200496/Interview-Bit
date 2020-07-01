https://www.interviewbit.com/problems/sorted-insert-position/

int Solution::searchInsert(vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int n = A.size();
    if (n == 0) return 0;
    if (A[0] > B) return 0;
    if (A[n-1] < B) return n;
    
    int l = 0, h = n-1;
    while (l <= h) {
        int mid = l + (h-l)/2;
        if (A[mid] == B) return mid;
        if (A[mid] > B) {
            if (mid-1 >= l && A[mid-1] < B) return mid;
            h = mid-1;
        } else {
            if (mid-1 <= h && A[mid+1] > B) return mid+1;
            l = mid+1;
        }
    }
    return 0;
}
