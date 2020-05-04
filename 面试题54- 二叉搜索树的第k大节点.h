//
// Created by Joc zu on 2020/5/4.
//

#ifndef LEETCODEGIT_面试题54_二叉搜索树的第K大节点_H
#define LEETCODEGIT_面试题54_二叉搜索树的第K大节点_H

#endif //LEETCODEGIT_面试题54_二叉搜索树的第K大节点_H

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
    void inOrder(TreeNode* root){
        if(!root) return ;
        inOrder(root->left);
        nums.push_back(root->val);
        inOrder(root->right);
    }
    int kthLargest(TreeNode* root, int k) {
        inOrder(root);
        int numSize = nums.size();
        for(int i = numSize-2; i >= 0; i--){
            if(nums[i]<nums[i+1]) k--;
            if(k==0) return nums[i+1];
        }
        return nums[0];
    }
};