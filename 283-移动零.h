//
// Created by Joc zu on 2020/5/14.
//

#ifndef LEETCODEGIT_283_移动零_H
#define LEETCODEGIT_283_移动零_H

#endif //LEETCODEGIT_283_移动零_H

#include <vector>
using namespace std;

//class Solution {
//public:
//    void moveZeroes(vector<int>& nums) {
//        int numSize = nums.size();
//        int count = 0;
//        for(int i = 0; i < numSize; i++)
//        {
//            if(nums[i] == 0)
//            {
//                nums.erase(nums.begin()+i);
//                count++;
//                numSize--;
//                i--;
//            }
//        }
//        while(count--) nums.push_back(0);
//    }
//};

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for (int lastNonZeroFoundAt = 0, cur = 0; cur < nums.size(); cur++) {
            if (nums[cur] != 0) {
                swap(nums[lastNonZeroFoundAt++], nums[cur]);
            }
        }
    }
};

// https://leetcode-cn.com/problems/move-zeroes/solution/yi-dong-ling-by-leetcode/