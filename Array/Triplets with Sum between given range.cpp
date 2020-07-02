https://www.interviewbit.com/problems/triplets-with-sum-between-given-range/

int Solution::solve(vector<string> &A) {
    vector<float> v;
    if (A.size() < 3) return 0;
    for (int i = 0; i < A.size(); i++) {
        v.push_back(stof(A[i]));
    }
    float a = v[0], b = v[1], c = v[2];
    float mx = 0;
    
    for (int i = 3; i < v.size(); i++) {
        if (a+b+c < 2 && a+b+c > 1) return 1;
        else if (a+b+c > 2) {
            if (a > b && a > c) a = v[i];
            else if (b > a && b > c) b = v[i];
            else c = v[i];
        } else {
            if (a < b && a< c) a = v[i];
            else if (b < a && b < c) b = v[i];
            else c = v[i];
        }
    }
    if (a+b+c < 2 && a+b+c > 1) return 1;
    return 0;
}
