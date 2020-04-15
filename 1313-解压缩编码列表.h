//
// Created by Joc zu on 2020/4/15.
//

#ifndef LEETCODEGIT_1313_解压缩编码列表_H
#define LEETCODEGIT_1313_解压缩编码列表_H

#endif //LEETCODEGIT_1313_解压缩编码列表_H

#include <vector>
using namespace std;

class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> rlt;
        int i = 0;
        while (i < nums.size())
        {
            while (nums[i] > 0)
            {
                rlt.push_back(nums[i+1]);
                nums[i] = nums[i]-1;
            }
            if ((i + 2) < nums.size())
                i = i + 2;
            else
                break;
        }
        return rlt;
    }
};