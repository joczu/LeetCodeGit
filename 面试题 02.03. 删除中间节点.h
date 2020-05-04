//
// Created by Joc zu on 2020/5/3.
//

#ifndef LEETCODEGIT_面试题_02_03_删除中间节点_H
#define LEETCODEGIT_面试题_02_03_删除中间节点_H

#endif //LEETCODEGIT_面试题_02_03_删除中间节点_H

#include <iostream>
using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* getKthFromEnd(ListNode* head, int k) {
        ListNode *fast = head, *slow = head;
        while(k--) fast = fast->next;
        while(fast){
            fast = fast->next;
            slow = slow->next;
        }
        return slow;
    }
};