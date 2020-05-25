//
// Created by Joc zu on 2020/5/23.
//


#ifndef LEETCODEGIT_面试题14_I_剪绳子_H
#define LEETCODEGIT_面试题14_I_剪绳子_H

#endif //LEETCODEGIT_面试题14_I_剪绳子_H

#include "vector"
using namespace std;

class Solution {
public:
    int cuttingRope(int n) {
        vector<int> dp(n+1);    // dp[i]表示i长度切分之后乘积最大值
        dp[1] = 1;
        for (int i = 2; i <= n; ++i) {
            for (int j = 1; j < i; ++j) {
                dp[i] = max(dp[i],dp[j]*dp[i-j]);
            }
            if(i!=n) dp[i] = max(dp[i],i);  // m > 1  当i!=n的时候要考虑不切分的情况
        }
        return dp[n];
    }
};