//
// Created by Joc zu on 2020/5/3.
//

#ifndef LEETCODEGIT_面试24_反转链表_H
#define LEETCODEGIT_面试24_反转链表_H

#endif //LEETCODEGIT_面试24_反转链表_H

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
    ListNode* reverseList(ListNode* head) {
        ListNode *pre = NULL, *cur = head;
        while(cur!=NULL){
            ListNode *tmp = cur->next;
            cur->next = pre;
            pre = cur;
            cur = tmp;
        }
        return pre;
    }
};