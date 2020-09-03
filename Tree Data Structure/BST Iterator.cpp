/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
stack<TreeNode*> s;
void pushAll(TreeNode *root) {
    while (root != NULL) {
        s.push(root);
        root = root->left;
    }
}

BSTIterator::BSTIterator(TreeNode *root) {
    pushAll(root);
}

/** @return whether we have a next smallest number */
bool BSTIterator::hasNext() {
    return !s.empty();
}

/** @return the next smallest number */
int BSTIterator::next() {
    TreeNode *tmp = s.top();
        s.pop();
        pushAll(tmp->right);
        return tmp->val;
}

/**
 * Your BSTIterator will be called like this:
 * BSTIterator i = BSTIterator(root);
 * while (i.hasNext()) cout << i.next();
 */
