//
// Created by Joc zu on 2020/5/10.
//

#ifndef LEETCODEGIT_445_两数相加_II_H
#define LEETCODEGIT_445_两数相加_II_H

#endif //LEETCODEGIT_445_两数相加_II_H

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
        stack<int> s1,s2;
        while(l1)
        {
            s1.push(l1->val);
            l1 = l1->next;
        }
        while(l2)
        {
            s2.push(l2->val);
            l2 = l2->next;
        }
        ListNode* r = nullptr;
        int carry = 0;
        while(!s1.empty()||!s2.empty()||carry != 0)
        {
            int a = s1.empty() ? 0 : s1.top();
            int b = s2.empty() ? 0 : s2.top();
            if(!s1.empty()) s1.pop();
            if(!s2.empty()) s2.pop();
            int current = a+b+carry;
            carry = current/10;
            current %= current;
            auto l3 = new ListNode(current);
            l3->next = r;   // 前插法
            r = l3;
        }
        return r;
    }
};