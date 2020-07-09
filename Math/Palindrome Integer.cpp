https://www.interviewbit.com/problems/palindrome-integer/

int Solution::isPalindrome(int A) {
    string tmp = to_string(A);
    int n = tmp.size();
    int j = n-1;
    
    for (int i = 0; i < n/2; i++) {
        if (tmp[i] != tmp[j]) return 0;
        j--;
    }
    return 1;
}
