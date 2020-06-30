https://www.interviewbit.com/problems/reverse-bits/

unsigned int Solution::reverse(unsigned int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    unsigned int B = 0;
    for (int i = 0; i < 32; i++) {
        int k = A & 1;
        B <<= 1;
        B |= k;
        A >>= 1;
    }
    return B;
}
