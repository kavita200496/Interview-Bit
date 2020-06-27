https://www.interviewbit.com/problems/preorder-traversal/

vector<int> Solution::preorderTraversal(TreeNode* A) {
    vector<int> res;
    stack<TreeNode*> s;
    
    while (1) {
        while (A) {
            res.push_back(A->val);
            s.push(A);
            A = A->left;
        }
        if (s.empty()) break;
        A = s.top();
        s.pop();
        A = A->right;
    }
    return res;
}
