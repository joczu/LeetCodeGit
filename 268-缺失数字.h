//
// Created by Joc zu on 2020/5/12.
//

#ifndef LEETCODEGIT_268_缺失数字_H
#define LEETCODEGIT_268_缺失数字_H

#endif //LEETCODEGIT_268_缺失数字_H

#include <vector>
using namespace std;

// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         int numSize = nums.size();
//         int missing = numSize;
//         for(int i = 0; i < numSize; i++)
//         {
//             missing ^= i ^ nums[i];   //在索引和数组中均出现过的元素相互异或会得0最后只剩缺失值
//         }
//         return missing;
//     }
// };

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int numSize = nums.size();
        int sum = (0+numSize)*(numSize+1)/2;
        for(int i = 0; i < numSize; i++)
        {
            sum -= nums[i];
        }
        return sum;
    }
};