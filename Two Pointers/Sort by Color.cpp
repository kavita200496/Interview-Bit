https://www.interviewbit.com/problems/sort-by-color/

void Solution::sortColors(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int n = A.size();
    int zero = 0;
    int one = 0;
    int two = n-1;
    
    while (one <= two) {
        while (A[zero] == 0) {
            zero++; one++;
            if (one > two) return;
        }
         while (A[two] == 2) {
            two--;
            if (one > two) return;
        } if (A[one] == 0) {
            swap(A[zero], A[one]);
        } else if (A[one] == 2) {
            swap(A[one], A[two]);
        } else one++;
    }
}
