https://www.interviewbit.com/problems/sum-root-to-leaf-numbers/

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void solve(TreeNode* A, int curr, int& res) {
    if (A == NULL) return;
    
    curr = (10*curr+A->val)%1003;
    if (A->left == NULL && A->right == NULL) {
        res = (res+curr)%1003;
        return;
    }
    
    solve(A->left, curr, res);
    solve(A->right, curr, res);
}

int Solution::sumNumbers(TreeNode* A) {
    int res = 0;
    solve(A, 0, res);
    
    return res%1003;
}
