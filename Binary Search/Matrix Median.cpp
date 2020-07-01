https://www.interviewbit.com/problems/matrix-median/

int Solution::findMedian(vector<vector<int> > &A) {
    int n = A.size();
    if (n == 0) return 0;
    int m = A[0].size();
    
    int mini = INT_MAX, maxi = INT_MIN;
    
    for (int i = 0; i < n; i++) {
        mini = min(mini, A[i][0]);
        maxi = max(maxi, A[i][m-1]);
    }
    
    int d = (m * n + 1)/2;
    
    while (mini < maxi) {
        int mid = mini + (maxi - mini)/2;
        int place = 0;
        for (int i = 0; i < n; i++) 
            place = place + upper_bound(A[i].begin(), A[i].end(), mid) - A[i].begin();
        if (place < d) mini = mid+1;
        else maxi = mid;
    }
    return mini;
}
