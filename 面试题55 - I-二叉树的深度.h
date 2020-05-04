//
// Created by Joc zu on 2020/5/4.
//

#ifndef LEETCODEGIT_面试题55_I_二叉树的深度_H
#define LEETCODEGIT_面试题55_I_二叉树的深度_H

#endif //LEETCODEGIT_面试题55_I_二叉树的深度_H

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
    int maxDepth(TreeNode* root) {
        if(!root) return 0;
        int left = maxDepth(root->left);  //左子树
        int right = maxDepth(root->right);  //右子树
        return max(left,right)+1;
    }
};