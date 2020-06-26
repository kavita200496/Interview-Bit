https://www.interviewbit.com/problems/add-one-to-number/

vector<int> Solution::plusOne(vector<int> &A) {
    int n = A.size();
    int c = 0;
    
    
    for (int i = n-1; i >= 0; i--) {
        if (i == n-1){
            if(A[i] == 9) {
                A[i] = 0;
                c = 1;
            } else A[i] += 1;
        } else if (A[i] == 9 && c == 1) {
            A[i] = 0;
            c = 1;
        } else{ A[i] += c; c = 0;}
    }
    if (c == 1) A.insert(A.begin(), 1);
    int i = 0;
    while (A[i] == 0) {
        A.erase(A.begin());
    }
    return A;
}
