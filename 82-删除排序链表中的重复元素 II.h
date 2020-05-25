//
// Created by Joc zu on 2020/5/24.
//

#ifndef LEETCODEGIT_82_删除排序链表中的重复元素_II_H
#define LEETCODEGIT_82_删除排序链表中的重复元素_II_H

#endif //LEETCODEGIT_82_删除排序链表中的重复元素_II_H

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *dummy = new ListNode(-1),*slow = dummy,*fast = head;
        dummy->next = head;
        while(fast!=NULL&&fast->next!=NULL){ //快指针用于查找相同元素
            if(fast->val!=fast->next->val) {
                if(slow->next == fast) slow = fast; //快指针先前没查找到相同数
                else slow->next = fast->next; //先前查找到相同数，将出现相同数的前一个数连接到相同数后第一个不同数
            }
            fast = fast->next;
        }
        if(slow->next != fast) slow->next = fast->next; // 针对类似[1,1]的情况
        return dummy->next;
    }
};

// 链接：https://leetcode-cn.com/problems/remove-duplicates-from-sorted-list-ii/solution/si-chong-fang-fa-by-24shi-01fen-_00_01-2/
