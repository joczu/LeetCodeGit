//
// Created by Joc zu on 2020/5/4.
//

#ifndef LEETCODEGIT_1022_从根到叶的二进制数之和_H
#define LEETCODEGIT_1022_从根到叶的二进制数之和_H

#endif //LEETCODEGIT_1022_从根到叶的二进制数之和_H

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
private: int ans = 0, rlt = 0;
public:
    int sumRootToLeaf(TreeNode* root) { // 先根遍历
        if(!root) return NULL;
        root->val = 2*ans + root->val;
        ans = root->val;
        if(!root->left && !root->right) rlt += root->val;
        sumRootToLeaf(root->left);
        ans = root->val;
        sumRootToLeaf(root->right);
        return rlt;
    }
};