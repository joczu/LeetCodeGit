//
// Created by Joc zu on 2020/5/4.
//

#ifndef LEETCODEGIT_面试题_04_02_最小高度树_H
#define LEETCODEGIT_面试题_04_02_最小高度树_H

#endif //LEETCODEGIT_面试题_04_02_最小高度树_H

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
    TreeNode* buildTree(vector<int>& nums, int left, int right){
        if(left > right) return NULL;
        int mid = (left+right)/2;
        auto node = new TreeNode(nums[mid]);   // 创建新节点
        node->left = buildTree(nums, left, mid-1);  // 新节点的左子树
        node->right = buildTree(nums, mid+1, right);  // 新节点的右子树
        return node;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return buildTree(nums, 0, nums.size()-1);
    }
};