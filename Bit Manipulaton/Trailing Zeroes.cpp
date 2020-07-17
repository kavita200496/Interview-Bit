int Solution::solve(int A) {
    int count = 0;
    int res = A & 1; 
    while (res != 1 && A) {
        A >>= 1;
        count++;
        res = A & 1;
    }
    return count;
}
