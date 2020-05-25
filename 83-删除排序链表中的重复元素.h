//
// Created by Joc zu on 2020/5/24.
//

#ifndef LEETCODEGIT_83_删除排序链表中的重复元素_H
#define LEETCODEGIT_83_删除排序链表中的重复元素_H

#endif //LEETCODEGIT_83_删除排序链表中的重复元素_H

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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head) return head;
        ListNode *q = head;
        while(q->next)
        {
            if(q->val == q->next->val) q->next = q->next->next;
            else q = q->next;
        }
        return head;
    }
};