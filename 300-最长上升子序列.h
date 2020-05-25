//
// Created by Joc zu on 2020/5/11.
//

#ifndef LEETCODEGIT_300_最长上升子序列_H
#define LEETCODEGIT_300_最长上升子序列_H

#endif //LEETCODEGIT_300_最长上升子序列_H

#include <vector>
using namespace std;

//class Solution {  //动态规划法 O(n^2)
//public:
//    int lengthOfLIS(vector<int>& nums) {
//        int numSize = nums.size();
//        vector<int> DP(numSize,1);   // dp[i] 表示以位置 i 结尾的子序列的最大长度
//        int maxNum = 0;
//        for(int i = 0; i < numSize; i++)
//        {
//            for(int j = 0; j < i; j++)
//            {
//                if(nums[i]>nums[j]) DP[i] = max(DP[i],DP[j]+1);
//            }
//            if (DP[i] > maxNum) maxNum = DP[i];
//        }
//        return maxNum;
//    }
//};

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int len = 1, n = (int)nums.size();
        if (n == 0) return 0;
        vector<int> d(n + 1, 0);   // d[i]表示长度为 i 的最长上升子序列的末尾元素的最小值，用 len 记录目前最长上升子序列的长度
        d[len] = nums[0];
        for (int i = 1; i < n; ++i) {
            if (nums[i] > d[len]) d[++len] = nums[i];
            else{
                int l = 1, r = len, pos = 0; // 如果找不到说明所有的数都比 nums[i] 大，此时要更新 d[1]，所以这里将 pos 设为 0
                while (l <= r) {
                    int mid = (l + r) >> 1;
                    if (d[mid] < nums[i]) {
                        pos = mid;
                        l = mid + 1;
                    }
                    else r = mid - 1;
                }
                d[pos + 1] = nums[i];
            }
        }
        return len;
    }
};