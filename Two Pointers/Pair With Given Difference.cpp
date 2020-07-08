https://www.interviewbit.com/problems/pair-with-given-difference/

int Solution::solve(vector<int> &A, int B) {
    sort(A.begin(), A.end());
    int n = A.size();
    int l = 0;
    int h = 0;
    while (l < n && h < n) {
        if (l != h && (A[h]- A[l]) == B) return 1;
        else if ((A[h] - A[l]) > B) l++;
        else h++;
    }
    return 0;
}
