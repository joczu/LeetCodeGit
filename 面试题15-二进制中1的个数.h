//
// Created by Joc zu on 2020/5/24.
//

#include <cstdint>

#ifndef LEETCODEGIT_面试题15_二进制中1的个数_H
#define LEETCODEGIT_面试题15_二进制中1的个数_H

#endif //LEETCODEGIT_面试题15_二进制中1的个数_H

#include "iostream"
using namespace std;

class Solution {
public:
    int hammingWeight(uint32_t n) {   // 00000000000000000000000000001011
        int res = 0;
        for (int i = 0; i < 32; ++i) {
            if(n & (1<<i)) res++;
        }
        return res;
    }
};