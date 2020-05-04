//
// Created by Joc zu on 2020/5/4.
//

#ifndef LEETCODEGIT_面试题32_II_从上到下打印二叉树_II_H
#define LEETCODEGIT_面试题32_II_从上到下打印二叉树_II_H

#endif //LEETCODEGIT_面试题32_II_从上到下打印二叉树_II_H

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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> nums;
        if(!root) return nums;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            vector<int> num;
            int queueSize = q.size();
            for(int i = 0; i < queueSize; i++){   // queueSize控制每层个数   BFS
                TreeNode* tmp = q.front();
                num.push_back(tmp->val);
                q.pop();
                if(tmp->left) q.push(tmp->left);
                if(tmp->right) q.push(tmp->right);
            }
            nums.push_back(num);
        }
        return nums;
    }
};