https://www.interviewbit.com/problems/integer-to-roman/

string Solution::intToRoman(int A) {
    string s[] = {"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"};
    int c[] = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};
    int i = 12;
    string res = "";
    
    while (A > 0) {
        int q = A/c[i];
        A = A%c[i];
        
        while (q--) {
            res += s[i];    
        }
        i--;
    }
    return res;
}
