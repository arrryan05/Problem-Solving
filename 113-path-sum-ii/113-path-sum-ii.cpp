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
    void findpath(TreeNode*& root,int targetSum,vector<int>& path,vector<vector<int>>& paths){
        if(!root) return; 
        path.push_back(root->val);
        if((!root->left) && (!root->right) && (targetSum == root->val)){
            paths.push_back(path);
        }
        findpath(root->left,targetSum-root->val,path,paths);
        findpath(root->right,targetSum-root->val,path,paths);
        path.pop_back();
    }
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> paths;
        vector<int> path;
        findpath(root,targetSum,path,paths);
        return paths;
    }
};