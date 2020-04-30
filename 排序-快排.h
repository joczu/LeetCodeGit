//
// Created by Joc zu on 2020/4/29.
//

#ifndef LEETCODEGIT_排序_快排_H
#define LEETCODEGIT_排序_快排_H

#endif //LEETCODEGIT_排序_快排_H

#include<vector>
using namespace std;

class Solution
{
public:

    void QuickSort(vector<int> &arr, int low, int high){
        if (high <= low) return;
        int i = low;   // 0
        int j = high;  // arr.size()
        int key = arr[low];
        while (true)
        {
            /*从左向右找比key大的值*/
            while (arr[++i] < key) if (i == high) break;

            /*从右向左找比key小的值*/
            while (arr[--j] > key) if (j == low) break;

            if (i >= j) break;
            /*交换i,j对应的值*/
            swap(arr,i,j);
        }
        /*中枢值与j对应值交换*/
        swap(arr, low, j);   //一定要用j，因为j可能小于i，arr[j]<key，所以可以交换；i不行

        for (int k = 0; k < arr.size(); ++k) {
            cout << arr[k]<<' ';
        }
        cout << '\n';
        QuickSort(arr, low, j - 1);
        QuickSort(arr, j + 1, high);
    }

    void swap(vector<int> &nums, int left, int right){
        int tmp = nums[left];
        nums[left] = nums[right];
        nums[right] = tmp;
    }
};