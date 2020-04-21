//
// Created by Joc zu on 2020/4/21.
//

#ifndef LEETCODEGIT_面试题39_数组中出现次数超过一半的数字_H
#define LEETCODEGIT_面试题39_数组中出现次数超过一半的数字_H

#endif //LEETCODEGIT_面试题39_数组中出现次数超过一半的数字_H

#include <vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
//        int num = 1, rlt;
//        for (int i = 1; i < nums.size(); ++i) {
//            if (nums[i] != nums[i-1]) num = 1;
//            else num += 1;
//            if(num > nums.size()/2) return nums[i];
//        }
        return nums[nums.size()/2];
    }
};