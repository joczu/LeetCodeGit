//
// Created by Joc zu on 2020/5/4.
//

#ifndef LEETCODEGIT_530_二叉搜索树的最小绝对差_H
#define LEETCODEGIT_530_二叉搜索树的最小绝对差_H

#endif //LEETCODEGIT_530_二叉搜索树的最小绝对差_H

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
    void inorder(TreeNode* node, vector<int> &val)
    {
        if (!node) return;
        inorder(node->left,val);
        val.push_back(node->val);
        inorder(node->right,val);
    }
    int getMinimumDifference(TreeNode* root) {
        vector<int> val;
        inorder(root, val);
        int valSize = val.size();
        int diffmin = INT_MAX;
        for(int i = 1; i < valSize; i++){
            if(val[i]-val[i-1] < diffmin) diffmin = val[i]-val[i-1];
        }
        return diffmin;
    }
};