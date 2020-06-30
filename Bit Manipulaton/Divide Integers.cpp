https://www.interviewbit.com/problems/divide-integers/

int Solution::divide(int A, int B) {
    int sign = 1;
    if (A<0){sign = -sign;}
    if (B<0){sign = -sign;}
    unsigned long long tmp = abs((long long)A);
    unsigned long long tmp2 = abs((long long)B);
     unsigned long c = 1;
    while (tmp2 < tmp){
        tmp2 = tmp2<<1;    
        c = c<<1;
    }
     
    long long res = 0;
    while (tmp>=abs((long long)B)){
        while (tmp2 <= tmp){
            tmp -= tmp2;
            res = res+c;
        }
        tmp2=tmp2>>1;
        c=c>>1;    
    }
return (sign*res >= INT_MAX ||  sign*res < INT_MIN) ? INT_MAX : sign*res;
}
