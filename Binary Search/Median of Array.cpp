https://www.interviewbit.com/problems/median-of-array/

double Solution::findMedianSortedArrays(const vector<int> &A, const vector<int> &B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    if (A.size() > B.size())
        return findMedianSortedArrays(B, A);
    int x = A.size(), y = B.size();
    int l = 0, h = x;
    
    while (l <= h) {
        int partitionx = (l+h)/2;
        int partitiony = (x+y+1)/2-partitionx;
        
        int max_lx = (partitionx == 0) ? INT_MIN : A[partitionx-1];
        int min_rx = (partitionx == x)?INT_MAX : A[partitionx];
        
        int max_ly = (partitiony == 0) ? INT_MIN : B[partitiony-1];
        int min_ry = (partitiony == y)?INT_MAX : B[partitiony];
        
        if (max_lx <= min_ry && max_ly <= min_rx) {
            if ((x+y)%2 == 0) 
                return ((double)(max(max_lx, max_ly) + min(min_rx, min_ry)))/2;
            else return (double)max(max_lx, max_ly);
        } else if (max_lx > min_ry) h = partitionx - 1;
        else l = partitionx + 1;
    }
    return 0.0;
}
