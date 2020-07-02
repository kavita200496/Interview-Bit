https://www.interviewbit.com/problems/largest-number/

int mycompare(string X, string Y) {
    string XY = X.append(Y);
    string YX = Y.append(X);
    
    return XY.compare(YX) > 0?1:0;
}

string Solution::largestNumber(const vector<int> &A) {
    vector<string> tmp;
    
    for (int i = 0; i < A.size(); i++) {
        tmp.push_back(to_string(A[i]));
    }
    
    sort(tmp.begin(), tmp.end(), mycompare);
    string res = "";
    
    for (int i = 0; i < tmp.size(); i++) {
        res += tmp[i];
    }
    int i = 0;
    while (res[i] == '0') {
        i++;
        if (i >= tmp.size()) res = "0";
    }
    return res;
    
}
