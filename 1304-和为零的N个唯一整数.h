//
// Created by Joc zu on 2020/4/21.
//

#ifndef LEETCODEGIT_1304_和为零的N个唯一整数_H
#define LEETCODEGIT_1304_和为零的N个唯一整数_H

#endif //LEETCODEGIT_1304_和为零的N个唯一整数_H

#include <vector>
using namespace std;

class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> rlt;
        int half = n / 2;
        if (n / 2 != (n + 1) / 2) rlt.push_back(0);
        while (half > 0) {
            rlt.push_back(half);
            rlt.push_back(-half);
            half -= 1;
        }
        return rlt;
    }
};