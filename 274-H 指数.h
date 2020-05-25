//
// Created by Joc zu on 2020/5/12.
//

#ifndef LEETCODEGIT_274_H_指数_H
#define LEETCODEGIT_274_H_指数_H

#endif //LEETCODEGIT_274_H_指数_H

#include <vector>
using namespace std;

class Solution {
public:
    int hIndex(vector<int>& citations) {
        int size = citations.size();
        if(size == 0) return 0;
        int rlt = 0;
        for(int i = 1; i <= size; i++)
        {
            int tmp = 0;
            for(int j = 0; j < size; j++)
            {
                if(citations[j] >= i) tmp++;
                if(tmp == i) {
                    rlt = tmp;
                    break;
                }
            }
        }
        return rlt;
    }
};

//// 建立优先队列（优先输出最大的数字, 默认是大顶堆）
//class Solution {
//public:
//    int hIndex(vector<int>& citations)
//    {
//        if (citations.size() == 0) {
//            return 0;
//        }
//
//        int ans = 0;
//        priority_queue<int> pq(citations.begin(), citations.end());
//        while (pq.empty() == false) {
//            if (pq.top() >= (ans + 1)) {  // 依次比较数字和对应的索引
//                ans++;
//                pq.pop();
//            } else {
//                break;
//            }
//        }
//
//        return ans;
//    }
//};

// https://leetcode-cn.com/problems/h-index/solution/hzhi-shu-you-xian-dui-lie-yong-shi-0ms-by-christal/
