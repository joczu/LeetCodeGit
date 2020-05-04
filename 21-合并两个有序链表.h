//
// Created by Joc zu on 2020/5/3.
//

#ifndef LEETCODEGIT_21_合并两个有序链表_H
#define LEETCODEGIT_21_合并两个有序链表_H

#endif //LEETCODEGIT_21_合并两个有序链表_H

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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *l3 = new ListNode(-1);
        ListNode *cur = l3;
        while(l1 && l2){
            if(l1->val < l2->val){
                cur->next = l1;
                cur = cur->next;
                l1 = l1->next;
            }else{
                cur->next = l2;
                cur = cur->next;
                l2 = l2->next;
            }
        }
        cur->next = l1 ? l1:l2;
        return l3->next;
    }
};