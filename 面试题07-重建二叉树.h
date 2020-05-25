//
// Created by Joc zu on 2020/5/22.
//

#ifndef LEETCODEGIT_面试题07_重建二叉树_H
#define LEETCODEGIT_面试题07_重建二叉树_H

#endif //LEETCODEGIT_面试题07_重建二叉树_H

#include "vector"
#include "map"

using namespace std;

// Definition for a binary tree node.
struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };


class Solution {
public:
    vector<int> Preorder ;
    map<int,int> d;

    TreeNode* build(int pre_root ,int in_left ,int in_right){  // pre_root是在preorder中的root索引，in_left和in_right是inorder中的边界索引
        //如果左边界大于右边界说明到过了叶子
        if(in_left > in_right){
            return NULL;
        }
        //pre_root 是先序里面的索引 ！！
        TreeNode* root = new TreeNode(Preorder[pre_root]);
        //获取先序中的节点在中序中的节点， 即index 左边就是这节点的左子树，index右边就是节点的右子树
        int index = d[Preorder[pre_root]];   // index是指在inorder中
        //当前节点左树即为先序索引+1 （没了话会在下一次迭代返回NULL）
        root->left = build(pre_root+1,in_left,index-1);
        //当前节点右树即为 根结点在前序中的索引+左树所有节点数（即节点在中序中的索引）-左边界+1 ，下一次的左边界为根在中序的索引+1
        root->right = build(pre_root+index-in_left+1,index+1 ,in_right);
        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        //赋值至外部变量
        Preorder = preorder;
        //使用map映射inorder的值和索引，提高找到索引效率
        for(int i=0;i<inorder.size();i++){
            d[inorder[i]] = i;
        }
        return build(0,0,preorder.size()-1);
    }
};