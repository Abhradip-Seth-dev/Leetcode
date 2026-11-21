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
    void fun(vector<int>& store,TreeNode* Node){
        if(Node==nullptr) return;

        fun(store,Node->left);
        store.push_back(Node->val);
        fun(store,Node->right);
        return;
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> store;
        fun(store,root);
        return store;
    }
};