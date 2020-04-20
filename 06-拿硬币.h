//
// Created by Joc zu on 2020/4/20.
//

#ifndef LEETCODEGIT_06_拿硬币_H
#define LEETCODEGIT_06_拿硬币_H

#endif //LEETCODEGIT_06_拿硬币_H

#include <vector>
#include <math.h>
using namespace std;

class Solution {
public:
    int minCount(vector<int>& coins) {
        int rlt = 0;
        int len = coins.size();
        for (int i = 0; i < len; i++)
        {
            rlt += ceil(float(coins[i])/2);
        }
        return rlt;
    }
};