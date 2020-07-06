https://www.interviewbit.com/problems/palindrome-string/

bool isAlphaNumeric(char c){
    if((c>='0'&&c<='9')||(c>='a'&&c<='z')||(c>='A'&&c<='Z'))
        return true;
    return false;
}

int Solution::isPalindrome(string A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int i=0; 
    int j=A.size()-1;
    
    while(i<=j){
         if(!isAlphaNumeric(A[i])){
         i++;
         continue;
        }
        if(!isAlphaNumeric(A[j])){
         j--;
         continue;
        }
        if(A[i]!=A[j]&&abs(A[i]-A[j])!=32)
         return 0;
        
        i++;j--;
    }
    return 1;
}
