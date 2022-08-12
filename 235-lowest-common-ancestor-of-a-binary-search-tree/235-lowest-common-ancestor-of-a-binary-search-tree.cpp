/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == nullptr) return root;
        
        TreeNode* currNode = root;
        while(1) {
            if(p->val < currNode->val and q->val < currNode->val)
                currNode = currNode->left;
            else if(p->val > currNode->val and q->val > currNode->val)
                currNode = currNode->right;
            else
                break;
        }
        
        return currNode;
    }
};