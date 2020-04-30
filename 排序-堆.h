//
// Created by Joc zu on 2020/4/30.
//

#ifndef LEETCODEGIT_排序_堆_H
#define LEETCODEGIT_排序_堆_H

#endif //LEETCODEGIT_排序_堆_H

#include<vector>
#include <iostream>

using namespace std;

class Solution
{
public:
    vector<int> HeapSort(vector<int> &arr){
        int len = arr.size();
        buildMaxHeap(arr, len);
        for (int i = len - 1; i > 0; i--) {
            swap(arr, 0, i);
            len--;
            heapify(arr, 0, len);
        }
        return arr;
    }

     void buildMaxHeap(vector<int> &arr, int len) {
        for (int i = len / 2; i >= 0; i--) {
            heapify(arr, i, len);
        }
     }

    void heapify(vector<int> &arr, int i, int len) {
        int left = 2 * i + 1;
        int right = 2 * i + 2;
        int largest = i;
        if (left < len && arr[left] > arr[largest]) {
            largest = left;
        }
        if (right < len && arr[right] > arr[largest]) {
            largest = right;
        }
        if (largest != i) {
            swap(arr, i, largest);
            heapify(arr, largest, len);
        }
    }

    void swap(vector<int> &arr, int i, int j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
};