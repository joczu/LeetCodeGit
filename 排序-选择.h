//
// Created by Joc zu on 2020/4/29.
//

#ifndef LEETCODEGIT_排序_选择_H
#define LEETCODEGIT_排序_选择_H

#endif //LEETCODEGIT_排序_选择_H

#include<vector>
using namespace std;

class Solution
{
public:
    vector<int> SelectionSort(vector<int> &nums){
        int numSize = nums.size();
        int max, maxIndex, tmp;
        for (int i = 0; i < numSize; ++i) {
            max = nums[i];
            maxIndex = i;
            for (int j = i+1; j < numSize; ++j) {
                if (nums[j] > max){
                    max = nums[j];
                    maxIndex = j;
                }
            }
            nums[maxIndex] = nums[i];
            nums[i] = max;
        }
        return nums;
    }
};