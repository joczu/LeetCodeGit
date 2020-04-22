//
// Created by Joc zu on 2020/4/23.
//

#ifndef LEETCODEGIT_1122_数组的相对排序_H
#define LEETCODEGIT_1122_数组的相对排序_H

#endif //LEETCODEGIT_1122_数组的相对排序_H

#include <vector>
using namespace std;

class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        sort(arr1.begin(),arr1.end());
        vector<int> rlt;
        vector<int> flag(arr1.size());
        int arr1Size = arr1.size();
        int arr2Size = arr2.size();
        for (int j = 0; j < arr2Size; ++j) {
            for (int i = 0; i < arr1Size; ++i) {
                if(arr1[i] == arr2[j]){
                    flag[i]++;
                    rlt.push_back(arr1[i]);
                }
            }
        }
        for (int i = 0; i < arr1Size; ++i) {
            if (flag[i] == 0) rlt.push_back(arr1[i]);
        }
        return rlt;
    }
};

/*
 * 解题思路：数组一和数组二对比，相等则交换数组一中的数到前面去，最后sort(begin+tmp,end)即可。
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int tmp = 0;
        for(int i = 0;i<arr2.size();++i)
           for(int j = 0;j<arr1.size();++j){
               if(arr1[j] == arr2[i]){
                   swap(arr1[j],arr1[tmp]); ++tmp;
               }
           }
           sort(arr1.begin()+tmp,arr1.end());
           return arr1;
    }
链接：https://leetcode-cn.com/problems/relative-sort-array/solution/c-jian-dan-ti-jie-by-shi-fen-fang-qi-zhong-4/
 */