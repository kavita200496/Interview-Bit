https://www.interviewbit.com/problems/max-rectangle-in-binary-matrix/

int Solution::maximalRectangle(vector<vector<int> > &a) {
    
    if(a.empty()) return 0;
    int m = a.size();
    int c = a[0].size();
    
    int l[c+1], h[c+1], r[c+1];
    for(int i = 0; i < c; i++) {l[i] = h[i] = 0; r[i] = c;}
    int ans = 0;
    for(int i = 0; i < m; i++) {
        int l1 = 0, r1 = c;
        
        for(int j = 0; j < c; j++) {
            if(a[i][j] == 1) h[j]++;
            else h[j] = 0;
        }
        
        for(int j = 0; j < c; j++) {
            if(a[i][j] == 1) l[j] = max(l[j], l1);
            else {l[j] = 0; l1 = j+1;}
        }
        
        for(int j = c - 1; j >= 0; j--) {
            if(a[i][j] == 1) r[j] = min(r[j], r1);
            else {r[j] = c; r1 = j;}
        }
        
        for(int j = 0; j < c; j++)
            ans = max(ans, (r[j] - l[j]) * h[j]);
    }
    
    return ans;
}
