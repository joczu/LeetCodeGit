//
// Created by Joc zu on 2020/5/23.
//

#ifndef LEETCODEGIT_面试题11_旋转数组的最小数字_H
#define LEETCODEGIT_面试题11_旋转数组的最小数字_H

#endif //LEETCODEGIT_面试题11_旋转数组的最小数字_H

#include "vector"
using namespace std;

class Solution {
public:
    int minArray(vector<int>& numbers) {
        int l = 0, r = numbers.size()-1;
        while (l <= r)
        {
            int mid = l + ((r-l)>>1);
            if(numbers[mid] > numbers[r]) l = mid + 1;
            else if(numbers[mid] < numbers[r]) r = mid;
            else r = r - 1;
        }
        return numbers[l];
    }
};