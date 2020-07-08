https://www.interviewbit.com/problems/remove-duplicates-from-sorted-array/

int Solution::removeDuplicates(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n = A.size();
    if (n == 0) return n;
    
    int j = 0;
    for (int i = 1; i < n; i++) {
        if (A[j] != A[i]) {
            A[j+1] = A[i];
            j++;
        }
    }
    
    A.erase(A.begin()+j+1, A.end());
    return A.size();
}
