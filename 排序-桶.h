//
// Created by Joc zu on 2020/4/30.
//

#ifndef LEETCODEGIT_排序_桶_H
#define LEETCODEGIT_排序_桶_H

#endif //LEETCODEGIT_排序_桶_H

#include<vector>
using namespace std;

class Solution
{
public:
    vector<int> bucketSort(vector<int> &nums){
        int numSize = nums.size(), max = nums[0], min = nums[0], bucketNums = 5;
        vector<int> rlt;
        vector<vector<int >> bucket(bucketNums,vector<int>(0));
        for (int i = 0; i < numSize; ++i) {
            if(nums[i] > max) max = nums[i];
            if(nums[i] < min) min = nums[i];
        }
        int range = (max-min)/bucketNums + 1;   // 每个桶值范围
        for (int j = 0; j < numSize; ++j) {
            bucket[(nums[j]-min)/range].push_back(nums[j]);   // 划分到哪个桶
        }
        for (auto bk:bucket) {
//            for (int i = 0; i < bk.size(); ++i) {
//                cout << bk[i] << ' ';
//            }
//            cout << '\n';
            if (bk.size()>0) bk = InsertSort2(bk);
            for (int i = 0; i < bk.size(); ++i) {
                rlt.push_back(bk[i]);
            }
        }
        return rlt;
    }
    // 桶内排序
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
};