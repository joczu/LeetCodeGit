//
// Created by Joc zu on 2020/5/23.
//

#ifndef LEETCODEGIT_面试题10_II_青蛙跳台阶问题_H
#define LEETCODEGIT_面试题10_II_青蛙跳台阶问题_H

#endif //LEETCODEGIT_面试题10_II_青蛙跳台阶问题_H

#include "vector"
using namespace std;

class Solution {
public:
    int numWays(int n) {
        if(n <= 1) return 1;
        vector<int> dp(n+1,1);
        for(int i = 2; i <= n; i++)
        {
            dp[i] = (dp[i-1]+dp[i-2])%1000000007;
        }
        return dp[n];
    }
};