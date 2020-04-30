//
// Created by Joc zu on 2020/4/29.
//

#ifndef LEETCODEGIT_排序_希尔_H
#define LEETCODEGIT_排序_希尔_H

#endif //LEETCODEGIT_排序_希尔_H

#include<vector>
using namespace std;

class Solution
{
public:
    vector<int> ShellSort(vector<int> &nums){
        for(int gap = nums.size()/2; gap > 0; gap /= 2){
            //从第gap个元素，逐个对其所在组进行直接插入排序操作
            for(int i = gap; i < nums.size(); i++){
                int j = i;
                while(j-gap >= 0 && nums[j] < nums[j-gap]){
                    // 插入排序采用交换法 (类似冒泡)
                    int tmp = nums[j];
                    nums[j] = nums[j-gap];
                    nums[j-gap] = tmp;
                    j -= gap;
                }
            }
        }
        return nums;
    }
};