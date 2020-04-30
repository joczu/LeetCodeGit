//
// Created by Joc zu on 2020/4/29.
//

#ifndef LEETCODEGIT_排序_插入_H
#define LEETCODEGIT_排序_插入_H

#endif //LEETCODEGIT_排序_插入_H

#include<vector>
using namespace std;

class Solution
{
public:
    vector<int> InsertSort(vector<int> &nums){
        int numSize = nums.size();
        for (int i = 1; i < numSize; ++i) {
            for (int j = 0; j < i; ++j) {   // 已排序的子数组
                if(nums[i] < nums[j]) {
                    nums.insert(nums.begin()+j,nums[i]);   // 插入删除法
                    nums.erase(nums.begin()+i+1);
                    break;
                }
            }
        }
        return nums;
    }

    vector<int> InsertSort2(vector<int> &arr) {
        for (int i = 1; i < arr.size(); i++) {
            int tmp = arr[i];
             // 从已经排序的序列最右边的开始比较，找到比其小的数
            int j = i;
            while (j > 0 && tmp < arr[j - 1]) {
                arr[j] = arr[j - 1];     // 移动法
                j--;
            }
            // 存在比其小的数，插入
            if (j != i) {
                arr[j] = tmp;
            }
        }
        return arr;
    }

    vector<int> InsertSort3(vector<int> &arr) {
        for (int i = 1; i < arr.size(); i++) {
            int tmp;
            int j = i;
            while (j > 0 && arr[j] < arr[j - 1]) {      // 交换法
                tmp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = tmp;
                j--;
            }
        }
        return arr;
    }
};