string Solution::convertToTitle(int A) {
    string res = "";
    int tmp = A;
    
    while (tmp) {
        int rem = tmp%26;
        if (rem == 0){
            res += 'Z';
            tmp = (tmp/26)-1;
        } else {
            res += (rem - 1)+'A';
            tmp = tmp/26;
        }
    }
    reverse(res.begin(), res.end());
    return res;
}
