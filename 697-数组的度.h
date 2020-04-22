//
// Created by Joc zu on 2020/4/22.
//

#ifndef LEETCODEGIT_697_数组的度_H
#define LEETCODEGIT_697_数组的度_H

#endif //LEETCODEGIT_697_数组的度_H

#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int,int> dict;
        int numsSize = nums.size();
        int rlt = numsSize;
        vector<int> freq(numsSize);
        for (int i = 0; i < numsSize; ++i) {
            dict[nums[i]]++;
        }
        int maxFreq = 0;
        for (auto x : dict) {
            if(x.second > maxFreq) maxFreq = x.second;
        }
        for (auto y : dict) {
            if (y.second == maxFreq){
                vector<int> interval;
                for (int i = 0; i < numsSize; ++i) {
                    if (nums[i] == y.first) interval.push_back(i);
                }
                if(interval[interval.size()-1]-interval[0] + 1 < rlt) rlt = interval[interval.size()-1] - interval[0] + 1;
            }
        }
        return rlt;
    }
};