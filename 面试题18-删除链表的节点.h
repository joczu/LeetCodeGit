//
// Created by Joc zu on 2020/5/24.
//

#ifndef LEETCODEGIT_面试题18_删除链表的节点_H
#define LEETCODEGIT_面试题18_删除链表的节点_H

#endif //LEETCODEGIT_面试题18_删除链表的节点_H

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

// class Solution {       // 双指针法
// public:
//     ListNode* deleteNode(ListNode* head, int val) {
//         ListNode* p = head, *q = head->next;
//         if(p->val == val) return head->next;
//         while(q)
//         {
//             if(q->val == val)
//             {
//                 p->next = q->next;
//                 break;
//             }
//             q = q->next;
//             p = p->next;
//         }
//         return head;
//     }
// };

class Solution {
public:
    ListNode* deleteNode(ListNode* head, int val) {
        if(head==NULL)return NULL;
        if(head->val==val)return head->next;
        ListNode *p=head;
        while(p->next){
            if(p->next->val==val){
                p->next=p->next->next;
                if(!p->next) break;
                break;
            }
            p=p->next;
        }
        return head;
    }
};

// https://leetcode-cn.com/problems/shan-chu-lian-biao-de-jie-dian-lcof/solution/czhi-jie-bian-li-by-rt-huang/

