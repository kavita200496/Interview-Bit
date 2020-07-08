https://www.interviewbit.com/problems/3-sum-zero/

vector<vector<int> > Solution::threeSum(vector<int> &A) {
    vector<vector<int>> result;
        if(A.size()<=2)return result;
        sort(A.begin(), A.end());
        for (int i = 0; i < A.size() - 2; i++) {
            long int a = A[i];
            if(a > 0) break;
            if (i > 0 && a == A[i - 1]) continue;
            for (long j = i + 1, k = A.size() - 1; j < k;) {
               long  int b = A[j];
                long int c = A[k];
                long int value = a + b + c;
                if (value == 0) {
                    result.push_back(vector<int>({a, b, c}));
                    while (j<k && b == A[++j]);
                    while (j < k &&c == A[--k]);
                } else if (value > 0) {
                    k--;
                } else {
                    j++;
                }
            }
        }
        return result;
}
