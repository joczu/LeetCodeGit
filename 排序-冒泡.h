//
// Created by Joc zu on 2020/4/29.
//

#ifndef LEETCODEGIT_排序_冒泡_H
#define LEETCODEGIT_排序_冒泡_H

#endif //LEETCODEGIT_排序_冒泡_H

#include<vector>
using namespace std;

class Solution
{
public:
    vector<int> BubbleSort(vector<int> &nums){
        int numSize = nums.size();
        int tmp;
        for (int i = 0; i < numSize; ++i) {
            for (int j = 1; j < numSize; ++j) {
                if (nums[j-1] > nums[j]){
                    tmp = nums[j];
                    nums[j] = nums[j-1];
                    nums[j-1] = tmp;
                }
            }
        }
        return nums;
    }
};