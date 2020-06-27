https://www.interviewbit.com/problems/inorder-traversal/

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::inorderTraversal(TreeNode* A) {
    stack<TreeNode*> s;
    vector<int> res;
    
    while (1) {
        while (A) {
            s.push(A);
            A = A->left;
        }
        if (s.empty()) break;
        A = s.top();
        s.pop();
        res.push_back(A->val);
        A = A->right;
    }
    return res;
}
