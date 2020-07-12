https://www.interviewbit.com/problems/maximum-consecutive-gap/

int Solution::maximumGap(const vector<int> &A) {
    int n = A.size();
    if (n < 2) return 0;
    vector<int> Min(n, -1);
    vector<int> Max(n, -1);
    
    int max_dist = 0;
    int gap = 0, bucket = 0, ind = 0;
    int mini = *min_element(A.begin(), A.end()); 
    int maxi = *max_element(A.begin(), A.end());
    
    gap = maxi-mini;
    gap /= (n-1);
    
    if (gap == 0) return maxi-mini;
    
    for (int i = 0; i < n; i++) {
        bucket = (int)((A[i] - mini)/gap);
        if(Min[bucket] < 0){
            Min[bucket] = A[i];
            Max[bucket] = A[i];
        }
        else{
            Min[bucket] = min(A[i], Min[bucket]);
            Max[bucket] = max(A[i], Max[bucket]);
        }
    }
    
    int max_diff = 0;
    
    for(int i = 0; i < Min.size(); i++){
        if(Min[i] >= 0){
            max_diff = max(max_diff, Min[i]-Max[ind]);
            ind = i;
        }    
    }
    return max_diff;
}
