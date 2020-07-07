https://www.interviewbit.com/problems/bulbs/

int Solution::bulbs(vector<int> &A) {
    int count = 0;
    int n = A.size();
    bool toggle = 0; 
    
    for (int i = 0; i < n; i++) {
        if (toggle) A[i] = 1-A[i];
        if (A[i] == 0) {
            A[i] = 1;
            if (!toggle) toggle = 1;
            else  toggle = 0;
            count++;
        }
    }
    return count;   
}
