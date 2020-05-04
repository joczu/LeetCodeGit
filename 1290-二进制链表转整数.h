//
// Created by Joc zu on 2020/5/3.
//

#ifndef LEETCODEGIT_1290_二进制链表转整数_H
#define LEETCODEGIT_1290_二进制链表转整数_H

#endif //LEETCODEGIT_1290_二进制链表转整数_H

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

// 反人类做法：记住从高位向低位转换的公式：anS=0;ans=2*ans+当前位的值；
class Solution {
public:
    int getDecimalValue(ListNode* head)
    {
        ListNode *p=head;
        int sum=0;
        while(p!=NULL)
        {
            sum=sum*2+p->val;
            p=p->next;
        }
        return sum;

    }

};