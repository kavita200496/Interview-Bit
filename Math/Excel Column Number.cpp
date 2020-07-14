https://www.interviewbit.com/problems/excel-column-number/

int Solution::titleToNumber(string A) {
    int result = 0;
    for (auto c : A) {
        result = (result * 26);
        result = (result + c - 'A'+1);
    }
    return result;
}
