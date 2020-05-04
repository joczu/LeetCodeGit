//
// Created by Joc zu on 2020/5/3.
//

#ifndef LEETCODEGIT_234_回文链表_H
#define LEETCODEGIT_234_回文链表_H

#endif //LEETCODEGIT_234_回文链表_H

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
    bool isPalindrome(ListNode* head) {
        ListNode *fast = head, *slow = head, *pre = NULL;
        ListNode *p;
        while(fast && fast->next){
            p = slow;
            slow = slow->next;  //快慢指针
            fast = fast->next->next;  // 慢指针每次走一步，快指针每次走两步，当快指针到结尾时慢指针刚走一半；

            p->next = pre;
            pre = p;

        }
        if(fast) slow = slow->next;  // 链表如果是奇数slow则进一步
        while(pre){
            if(pre->val!=slow->val) return false;
            pre = pre->next;
            slow = slow->next;
        }
        return true;
    }
};