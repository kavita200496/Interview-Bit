https://www.interviewbit.com/problems/max-depth-of-binary-tree/

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int Solution::maxDepth(TreeNode* A) {
    if (!A) return 0;
    
    int left = maxDepth(A->left);
    int right = maxDepth(A->right);
    
    int depth = max(left, right) + 1;
    return depth;
}
