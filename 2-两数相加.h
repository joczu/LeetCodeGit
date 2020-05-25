//
// Created by Joc zu on 2020/5/10.
//

#ifndef LEETCODEGIT_2_两数相加_H
#define LEETCODEGIT_2_两数相加_H

#endif //LEETCODEGIT_2_两数相加_H

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
        ListNode* p1 = l1,*p2 = l2;
        while(p1->next&&p2->next)
        {
            p1->val += p2->val;
            p1 = p1->next;
            p2 = p2->next;
        }
        p1->val += p2->val;
        if(!p1->next && p2->next) p1->next = p2->next;

        ListNode* tmp = l1;
        while(tmp)
        {
            if(tmp->val>9) {
                tmp->val = tmp->val%10;
                if(!tmp->next)
                {
                    ListNode* t = new ListNode(1);
                    tmp->next = t;
                    break;
                }
                tmp->next->val += 1;
            }
            tmp = tmp->next;
        }
        return l1;
    }
};