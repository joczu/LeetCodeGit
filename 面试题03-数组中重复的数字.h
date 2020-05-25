//
// Created by Joc zu on 2020/5/14.
//

#ifndef LEETCODEGIT_面试题03_数组中重复的数字_H
#define LEETCODEGIT_面试题03_数组中重复的数字_H

#endif //LEETCODEGIT_面试题03_数组中重复的数字_H

#include <vector>
using namespace std;

// class Solution {
// public:
//     int findRepeatNumber(vector<int>& nums) {  // 排序判断
//         sort(nums.begin(),nums.end());
//         for(int i = 1; i < nums.size(); i++)
//         {
//             if(nums[i] == nums[i-1]) return nums[i];
//         }
//         return nums[0];
//     }
// };

// class Solution {
// public:
//     int findRepeatNumber(vector<int>& nums) {   //哈希表法
//         int numSize = nums.size();
//         vector<int> hash(numSize);
//         for(int i = 0; i < numSize; i++)
//         {
//             if(hash[nums[i]] >= 1) return nums[i];
//             else hash[nums[i]]++;
//         }
//         return 0;
//     }
// };

class Solution {
public:
    int findRepeatNumber(vector<int>& nums) {    // 交换索引与数值
        int l = 0, r = nums.size()-1;
        while (l <= r)
        {
            int mid = (l+r)>>1;
            int count = 0;
            for(auto x: nums) if (x >= l && x <= mid) count++;
            if(l == r)
            {
                if(count > 1) return l;
                else break;
            }
            if(count > mid+1-l) r = mid;
            else l = mid + 1;
        }
        return -1;
    }
};

// class Solution {
// public:
//     int findRepeatNumber(vector<int>& nums) {    // 交换索引与数值
//         int numSize = nums.size();
//         for(int i = 0; i < numSize; i++)
//         {
//             if(nums[i] == i) continue;
//             else
//             {
//                 if(nums[nums[i]] == nums[i]) return nums[i];
//                 else
//                 {
//                     swap(nums,nums[i],i);
//                     i = -1;
//                 }
//             }
//         }
//         return 0;
//     }
//     void swap(vector<int>& nums, int i, int j)
//     {
//         int tmp = nums[i];
//         nums[i] = nums[j];
//         nums[j] = tmp;
//     }
// };

//class Solution {
//public:
//    int findRepeatNumber(vector<int>& nums) {  // 如果某个位置元素被取两次反，说明以该下标 作为数值的元素重复了；
//        int len=nums.size();
//        for(int i=0;i<len;i++){
//            if(nums[abs(nums[i])]<0)
//                return abs(nums[i]);
//            nums[abs(nums[i])]*=-1;
//        }
//        return 0;
//    }
//};
