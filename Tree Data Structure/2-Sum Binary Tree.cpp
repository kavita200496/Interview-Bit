/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int sum(TreeNode* A, int B, unordered_map<int, int>& umap) {
    if (!A) return 0;
    if (umap.find(B-A->val) != umap.end()) return 1;
    umap[A->val]++;
    return sum(A->left, B, umap) || sum(A->right, B, umap);
}

int Solution::t2Sum(TreeNode* A, int B) {
    unordered_map<int, int> umap;
    return sum(A, B, umap);
}
