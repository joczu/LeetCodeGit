//
// Created by Joc zu on 2020/5/4.
//

#include "LinkList.h"

#ifndef LEETCODEGIT_589_N叉树的前序遍历_H
#define LEETCODEGIT_589_N叉树的前序遍历_H

#endif //LEETCODEGIT_589_N叉树的前序遍历_H

/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
private: vector<int> nums;
public:
    vector<int> preorder(Node* root) {
        if(!root) return nums;
        nums.push_back(root->val);
        for(auto node : root->children) preorder(node);
        return nums;
    }
//    // 这种方法更快更省空间
//    vector<int> preorder(Node* root) {
//        if(!root) return nums;
//        vector<Node*> nodeList;
//        nodeList.push_back(root);
//        while(nodeList.size()!=0){
//            Node* tmp = nodeList.front();
//            nums.push_back(tmp->val);
//            nodeList.erase(nodeList.begin());
//            nodeList.insert(nodeList.begin(),tmp->children.begin(),tmp->children.end());
//        }
//        return nums;
//    }
};