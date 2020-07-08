https://www.interviewbit.com/problems/3-sum/

int Solution::threeSumClosest(vector<int> &A, int B) {
    vector<int> res;
    int n = A.size();
    sort(A.begin(), A.end());
    
    for (int i = 0; i < n-2; i++) {
        int l = i+1, h = n-1;
        
        while (l < h) {
            auto tmp = A[i] + A[l]+A[h];
            if (tmp == B) {
                return B;
            } else if (tmp > B) {
                res.push_back(tmp);
                h--;
            } else {
                res.push_back(tmp);
                l++;
            }
        }
    }
    int sum = INT_MAX;
    int index = 0;
    for (int i = 0; i < res.size(); i++)  {
        if (sum > abs(B-res[i])) {
            sum = abs(B-res[i]);
            index = i;
        }
    }
    return res[index];
}
