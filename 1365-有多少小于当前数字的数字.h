//
// Created by Joc zu on 2020/4/13.
//

#ifndef LEETCODEGIT_1365_有多少小于当前数字的数字_H
#define LEETCODEGIT_1365_有多少小于当前数字的数字_H

#endif //LEETCODEGIT_1365_有多少小于当前数字的数字_H
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> r(nums.size()); // 创建 nums.size()个0
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = 0; j < nums.size(); j++)
            {
                if (nums[i] > nums[j])
                {
                    r[i] += 1;
                }
            }
        }
        return r;
    }
};

/*
 方法二：频次数组 + 前缀和
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> cnt(101, 0);
        vector<int> vec((int)nums.size(), 0);
        for (int i = 0;i < (int)nums.size(); ++i){
            cnt[nums[i]]++;
        }
        for (int i = 1;i <= 100; ++i) cnt[i] += cnt[i-1]; // 求前缀和
        for (int i = 0;i < (int)nums.size(); ++i){
            if (nums[i]) vec[i] = cnt[nums[i] - 1];
        }
        return vec;
    }
};
复杂度分析

时间复杂度：统计 cnt 数组的前缀和需要 O(S) 的时间，遍历数组需要 O(n) 的时间，所以总时间复杂度为 O(S+n) ，其中 S 为值域大小，n=nums.length。

空间复杂度：O(S) ，需要开一个值域大小的数组。

链接：https://leetcode-cn.com/problems/how-many-numbers-are-smaller-than-the-current-number/solution/you-duo-shao-xiao-yu-dang-qian-shu-zi-de-shu-zi--2/
 */