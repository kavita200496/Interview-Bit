https://www.interviewbit.com/problems/increasing-path-in-matrix/

int helper(vector<vector<int>> &v)
{   int n = v.size();
    int m = v[0].size();
    int dp[n][m];
   dp[0][0] = 1;
   int flag = 0;
    for(int i = 1;i<n;i++)
    {
        if(v[i-1][0]<v[i][0]&&flag == 0)
        dp[i][0] = 1 + dp[i-1][0];
        else
        {
            flag = 1;
            dp[i][0] = 0;
        }
    }
    flag = 0;
    for(int j = 1;j<m;j++)
    {
        if(v[0][j-1]<v[0][j]&&flag == 0)
        dp[0][j] = 1 + dp[0][j-1];
        else
        {
            flag = 1;
            dp[0][j] = 0;
        }
    }
    int ans = 0;
    for(int i = 1;i<n;i++)
    {
        for(int j = 1;j<m;j++)
        {  
                dp[i][j] = 0;
                if(dp[i-1][j]>0&&v[i-1][j]<v[i][j])
                dp[i][j] = 1 + dp[i-1][j];
                if(dp[i][j-1]>0 && v[i][j-1]<v[i][j])
                dp[i][j] = 1 + dp[i][j-1];
                
            
        }
    }
     
    if(dp[n-1][m-1] == 0)
    return -1;
    return dp[n-1][m-1];
}
 
int Solution::solve(vector<vector<int> > &A) {
    return helper(A);
}
