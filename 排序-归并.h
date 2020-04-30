//
// Created by Joc zu on 2020/4/29.
//

#ifndef LEETCODEGIT_排序_归并_H
#define LEETCODEGIT_排序_归并_H

#endif //LEETCODEGIT_排序_归并_H

#include<vector>
#include <iostream>

using namespace std;

class Solution
{
public:
    void Merge(vector<int> &nums, int left, int mid, int right){
        int i = 0;
        while (mid+i<right){
            int j = mid+i;
            while (nums[j-1] > nums[j] && j >= left)       // 交换法
            {
                int tmp = nums[j-1];
                nums[j-1] = nums[j];
                nums[j] = tmp;
                j--;
            }
            i++;
        }
        for (int k = 0; k < nums.size(); ++k) {
            cout << nums[k]<<' ';
        }
        cout << '\n';

    }
     void MergeSort(vector<int> &nums, int start, int end){

        if (start < end) {
            int mid = (start + end)/2;
            MergeSort(nums, start, mid);
            MergeSort(nums, mid+1, end);
            Merge(nums, start, mid, end);
        }
    }
};