void decode(string& curr) {
    string res = "";
    int i = 0, t = 0, n = curr.size();
    char tmp;
    
    while (i < n) {
        tmp = curr[i];
        t = 1;
        while (i < n && curr[i] == curr[i+1]) {
            i++;
            t++;
        }
        i++;
        res += to_string(t)+tmp;
    }
    curr = res;
}

string Solution::countAndSay(int A) {
    string curr = "";
    if (A == 0) return curr;
    curr = "1";
    while (A != 1) {
        decode(curr);
        A--;
    }
    return curr;
}
