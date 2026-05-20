/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:

    void invert(auto* root) {
        if (!root) return;

        auto* tempLeft = root->left;
        root->left = root->right;
        root->right = tempLeft;
        invert(root->left);
        invert(root->right);
    }

    TreeNode* invertTree(TreeNode* root) {
        if (!root) return root;
        auto* tempLeft = root->left;
        root->left = root->right;
        root->right = tempLeft;
        invert(root->left);
        invert(root->right);
        return root;
    }
};
