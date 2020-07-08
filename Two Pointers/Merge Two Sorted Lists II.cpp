https://www.interviewbit.com/problems/merge-two-sorted-lists-ii/

void Solution::merge(vector<int> &A, vector<int> &B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n = B.size();
    int p = 0, q = 0;
    
    while(p<A.size() && q<n)
    {
        if(A[p]<B[q])
        {
            ++p;
        }
        else if(A[p]>=B[q])
        {
            A.insert(A.begin()+p, B[q]);
            ++q; ++p;
        }
    }
    while(q<n)
    {
        A.push_back(B[q]);
        ++q;
    }
}
