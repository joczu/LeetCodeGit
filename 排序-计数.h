//
// Created by Joc zu on 2020/4/30.
//

#ifndef LEETCODEGIT_排序_计数_H
#define LEETCODEGIT_排序_计数_H

#endif //LEETCODEGIT_排序_计数_H

#include<vector>
using namespace std;

class Solution
{
public:
    vector<int> CountSort(vector<int> &nums){
        int max = nums[0];
        int numSize = nums.size();
        for (auto x: nums){
            if (x > max) max = x;
        }
        vector<int> CountNums(max+1);
        for (int i = 0; i < numSize; ++i) {
            CountNums[nums[i]]++;
        }
        vector<int> rlt;
        for (int j = 0; j < max+1; ++j)
        {
            while (CountNums[j] > 0)
            {
                rlt.push_back(j);
                CountNums[j]--;
            }
        }
        return rlt;
    }
};