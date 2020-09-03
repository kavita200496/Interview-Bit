/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void find(TreeNode* A, TreeNode* &prev, TreeNode* &first, TreeNode* &second) {
    if (A == NULL) return;
    
    find(A->left, prev, first, second);
    if (prev != NULL && A->val < prev->val) {
        if (first == NULL) first = prev;
        second = A;
    }
    prev = A;
    find(A->right, prev, first, second);
}

vector<int> Solution::recoverTree(TreeNode* A) {
    TreeNode* prev = NULL, *first = NULL, *second = NULL;
    find(A, prev, first, second);
    
    vector<int> res;
    res.push_back(second->val);
    res.push_back(first->val);
    
    return res;
}
