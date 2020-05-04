//
// Created by Joc zu on 2020/5/4.
//

#ifndef LEETCODEGIT_538_把二叉搜索树转换为累加树_H
#define LEETCODEGIT_538_把二叉搜索树转换为累加树_H

#endif //LEETCODEGIT_538_把二叉搜索树转换为累加树_H

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
private: int val = 0;
public:
    TreeNode* convertBST(TreeNode* root) {
        if(!root) return NULL;
        convertBST(root->right);
        root->val += val;
        val = root->val;
        convertBST(root->left);
        return root;
    }
};