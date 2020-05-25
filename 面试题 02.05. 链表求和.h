//
// Created by Joc zu on 2020/5/10.
//

#ifndef LEETCODEGIT_面试题_02_05_链表求和_H
#define LEETCODEGIT_面试题_02_05_链表求和_H

#endif //LEETCODEGIT_面试题_02_05_链表求和_H

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l3 = new ListNode(0);
        ListNode* rlt = l3;
        int carry = 0;
        while(l1 || l2 || carry != 0)
        {
            int a = l1 ? l1->val : 0;
            int b = l2 ? l2->val : 0;
            int current = a + b + carry;
            carry = current/10;
            current %= 10;
            ListNode *tmp = new ListNode(current);
            l3->next = tmp;
            l3 = l3->next;
            if(!l1->next && !l2->next && carry != 0)
            {
                ListNode *tmp = new ListNode(1);
                l3->next = tmp;
            }
            if(!l1->next && !l2->next) break;
            if(l1->next) l1 = l1->next;
            else l1->val = 0;
            if(l2->next) l2 = l2->next;
            else l2->val = 0;
        }
        return rlt->next;
    }
};