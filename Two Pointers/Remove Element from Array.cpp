https://www.interviewbit.com/problems/remove-element-from-array/

int Solution::removeElement(vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n = A.size();
    int i = 0;
    while (i < n) {
        if (A[i] == B) break;
        i++;
    }
    if (i == n) return n;
    int j = i+1;
    
    while (j < n) {
        if (A[j] != B) {
            A[i] = A[j];
            i++;
        } j++;
    }
    
    while (i < n) {
        A.pop_back();
        i++;
    }
    return A.size();
}
