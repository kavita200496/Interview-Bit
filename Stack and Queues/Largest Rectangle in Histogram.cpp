https://www.interviewbit.com/problems/largest-rectangle-in-histogram/

int Solution::largestRectangleArea(vector<int> &A) {
    int max_rectangle = 0;
    stack<int> s;

    A.push_back(0);
    
    for (int index = 0; index < A.size(); index++) {
        if (s.empty() || A[index] >= A[s.top()]) s.push(index);
        else {
            int h = s.top();
            s.pop();
            max_rectangle = max(max_rectangle, 
                                A[h]*(s.empty()?index: index-s.top()-1));
            index--;
        }
    }
    return max_rectangle;
}
