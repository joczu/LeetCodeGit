//
// Created by Joc zu on 2020/5/13.
//

#ifndef LEETCODEGIT_279_完全平方数_H
#define LEETCODEGIT_279_完全平方数_H

#endif //LEETCODEGIT_279_完全平方数_H

#include <vector>
using namespace std;

class Solution {
public:
    int numSquares(int n) {
        vector<int> dp(n+1,INT_MAX);   // 用数组dp来记录n由m个完全平方数组成的话，就是dp[n] = m.
        dp[0] = 0;
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j*j <= i; j++)
            {
                dp[i] = min(dp[i],dp[i-j*j]+1);     // 对于数字n，可以进行分解，分解成某个数s和完全平方数的和，于是就有了dp[n] = dp[s] + 1 。
            }
        }
        return dp[n];
    }
};

// https://leetcode-cn.com/problems/perfect-squares/solution/cdphe-shu-xue-jie-fa-by-bao-bao-ke-guai-liao/