int Solution::solve(int A) {
    int prev=0,ans=1;
    for(int i=0;i<32;i++){
        long long int x=(1<<(i/2));  
        if(prev+x>=A){ 
            ans|=(1<<i);
            bool activate=0;
            for(int j=i-1;j>=(i+1)/2;j--){  
                if(prev+x/2>=A&&activate!=1){
                    if(prev+x/2==A){activate=1;}
                }
                else{ 
                    ans|=(1<<j);ans|=(1<<(i-j)); prev+=x/2;
                }
                x/=2;
            } return ans;
        }
        prev+=x;
    }
    return ans;
}
