https://www.interviewbit.com/problems/remove-duplicates-from-sorted-array-ii/

int Solution::removeDuplicates(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int i = 0;
    int j = 0;
    if (A.size() < 3) return A.size();
    for (i = 2; i < A.size(); i++) {
        if (A[j] != A[i]) {
            A[j+2] = A[i];
            j++;
        }
    }
    A.erase(A.begin()+j+2, A.end());
    return A.size();
}
