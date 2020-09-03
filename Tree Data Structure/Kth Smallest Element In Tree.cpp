/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 void inorder (TreeNode* A, vector<int>& arr) {
     if (!A) return;
     inorder(A->left, arr);
     arr.push_back(A->val);
     inorder(A->right, arr);
     
 }
int Solution::kthsmallest(TreeNode* A, int B) {
   vector<int> arr;
   
   inorder(A, arr);
   return arr[B-1];
}
