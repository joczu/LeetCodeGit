//
// Created by Joc zu on 2020/5/4.
//

#ifndef LEETCODEGIT_671_二叉树中第二小的节点_H
#define LEETCODEGIT_671_二叉树中第二小的节点_H

#endif //LEETCODEGIT_671_二叉树中第二小的节点_H

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
private: vector<int> nums;
public:
    void preOrder(TreeNode* root){
        if(!root) return;
        nums.push_back(root->val);
        preOrder(root->left);
        preOrder(root->right);
    }
    int findSecondMinimumValue(TreeNode* root) {
        preOrder(root);
        int numSize = nums.size();
        sort(nums.begin(),nums.end());
        int min = nums[0];
        for(int i = 0; i < numSize; i++) if(nums[i] > min) return nums[i];
        return -1;
    }
};