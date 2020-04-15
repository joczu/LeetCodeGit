//
// Created by Joc zu on 2020/4/15.
//

#ifndef LEETCODEGIT_1295_统计位数为偶数的数字_H
#define LEETCODEGIT_1295_统计位数为偶数的数字_H

#endif //LEETCODEGIT_1295_统计位数为偶数的数字_H

#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int rlt=0;
        for (int i = 0; i < nums.size(); ++i) {
            if(to_string(nums[i]).size()%2 == 0)
                rlt++;
        }
        return rlt;
    }
};