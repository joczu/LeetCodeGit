//
// Created by Joc zu on 2020/4/30.
//

#ifndef LEETCODEGIT_排序_基数_H
#define LEETCODEGIT_排序_基数_H

#endif //LEETCODEGIT_排序_基数_H

#include<vector>
using namespace std;

class Solution
{
public:
    vector<int> RadixSort(vector<int> &nums){
        int numSize = nums.size(), max = nums[0], min = nums[0], bucketNums = 10, divide = 1;
        for (int i = 0; i < numSize; ++i) if(nums[i] > max) max = nums[i]; // 取出最大值
        while (max > 0){
            vector<vector<int>> bucket(bucketNums,vector<int>(0));
            for (int j = 0; j < numSize; ++j) {
                int tmp = nums[j];
                int k = 1;
                while (divide > k)  {    // 取倒数第divide位
                    tmp = tmp/10;
                    k++;
                }
                bucket[tmp%10].push_back(nums[j]);   // 划分到哪个桶
            }
            nums.clear();
            for (auto bk:bucket) if (bk.size()>0) for (int i = 0; i < bk.size(); ++i)  nums.push_back(bk[i]);
            divide++;  //倒数第几位，从1开始
            max /= 10;
        }
        return nums;
    }
};