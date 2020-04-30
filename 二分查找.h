//
// Created by Joc zu on 2020/4/30.
//

#ifndef LEETCODEGIT_二分查找_H
#define LEETCODEGIT_二分查找_H

#endif //LEETCODEGIT_二分查找_H

#include<vector>
using namespace std;

class Solution
{
public:
    // 一般二分查找
    int BinarySearch(vector<int> &nums, int target){
        int left = 0, right = nums.size()-1;
        while (left <= right){
            int mid = (left + right)/2;
            if (nums[mid] == target) return mid;
            if (nums[mid] < target) left = mid + 1;
            if (nums[mid] > target) right = mid - 1;
        }
        return -1;
    }
    //查找左侧边界   https://mp.weixin.qq.com/s?__biz=MzUyNjQxNjYyMg==&mid=2247485570&idx=2&sn=7a4e2635aafcf1c9bd01642f6cedd409&chksm=fa0e6703cd79ee15f692f31c488aac6787a08ffea2ffe457a037310df355c1e6a810919333e4&scene=21#wechat_redirect
    int left_bound(vector<int> &nums, int target) {
        if (nums.size() == 0) return -1;
        int left = 0;
        int right = nums.size(); // 注意

        while (left < right) { // 注意
            int mid = (left + right) / 2;
            if (nums[mid] == target) {
                right = mid;
            } else if (nums[mid] < target) {
                left = mid + 1;
            } else if (nums[mid] > target) {
                right = mid; // 注意
            }
        }
        return left;
    }

    //查找右侧边界
    int right_bound(vector<int> &nums, int target) {
        if (nums.size() == 0) return -1;
        int left = 0, right = nums.size();

        while (left < right) {
            int mid = (left + right) / 2;
            if (nums[mid] == target) {
                left = mid + 1; // 注意
            } else if (nums[mid] < target) {
                left = mid + 1;
            } else if (nums[mid] > target) {
                right = mid;
            }
        }
        return left - 1; // 注意
    }
};