//
// Created by Joc zu on 2020/4/20.
//

#ifndef LEETCODEGIT_1351_统计有序矩阵中的负数_H
#define LEETCODEGIT_1351_统计有序矩阵中的负数_H

#endif //LEETCODEGIT_1351_统计有序矩阵中的负数_H

#include <vector>
using namespace std;

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int rlt = 0;
        int tmp;
        for (int i = grid.size()-1; i >= 0; i--) {
            for (int j = grid[i].size()-1; j >= 0; j--) {
                if (grid[i][j] < 0) rlt += 1;
                else break;
            }
        }
        return rlt;
    }
};

/*
 * https://leetcode-cn.com/problems/count-negative-numbers-in-a-sorted-matrix/solution/tong-ji-you-xu-ju-zhen-zhong-de-fu-shu-by-leetcode/
 */