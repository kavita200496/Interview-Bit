https://www.interviewbit.com/problems/length-of-last-word/

int Solution::lengthOfLastWord(const string A) {
    int n = A.size();
    int i = n-1;
    while (A[i] == ' '){
        i--;
        if (i <= 0) return 0;
    }
    int j = i;

    while (A[j] != ' ' && j >= 0) j--;
    
    return i-j;
}
