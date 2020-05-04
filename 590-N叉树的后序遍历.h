//
// Created by Joc zu on 2020/5/4.
//

#ifndef LEETCODEGIT_590_N叉树的后序遍历_H
#define LEETCODEGIT_590_N叉树的后序遍历_H

#endif //LEETCODEGIT_590_N叉树的后序遍历_H

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
private: vector<int> rlt;
public:
    vector<int> postorder(Node* root) {
        if(!root) return rlt;
        stack<Node*> s;
        s.push(root);
        while(!s.empty()){
            Node* tmp = s.top();
            rlt.insert(rlt.begin(),tmp->val);
            s.pop();
            for(auto x:tmp->children) s.push(x);
        }
        return rlt;
    }
};