//
// Created by Joc zu on 2020/5/5.
//

#ifndef LEETCODEGIT_257_二叉树的所有路径_H
#define LEETCODEGIT_257_二叉树的所有路径_H

#endif //LEETCODEGIT_257_二叉树的所有路径_H

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
    void ioOder(TreeNode* root, string path, vector<string>& roads){
        if(!root) return ;
        path.append(to_string(root->val));
        path.append("->");
        if(!root->left && !root->right){
            path.erase(path.length()-2);
            roads.push_back(path);
        }
        ioOder(root->left, path, roads);
        ioOder(root->right, path, roads);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> roads;
        string path;
        ioOder(root,path,roads);
        return roads;
    }
};