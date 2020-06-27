https://www.interviewbit.com/problems/postorder-traversal/

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::postorderTraversal(TreeNode* A) {
    vector<int> res;
    stack<TreeNode*> s;
    TreeNode* previous = NULL;
    
    do {
        while (A) {
            s.push(A);
            A = A->left;
        }
        
        while(A == NULL && !s.empty()) {
            A = s.top();
            if (A->right == NULL || A->right == previous) {
                res.push_back(A->val);
                s.pop();
                previous = A;
                A = NULL;
            } else A = A->right;
        }
    } while(!s.empty());
    return res;
}
