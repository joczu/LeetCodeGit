//
// Created by Joc zu on 2020/4/30.
//

#ifndef LEETCODEGIT_34_在排序数组中查找元素的第一个和最后一个位置_H
#define LEETCODEGIT_34_在排序数组中查找元素的第一个和最后一个位置_H

#endif //LEETCODEGIT_34_在排序数组中查找元素的第一个和最后一个位置_H

#include<vector>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.empty()) return {-1,-1};

        int left=0;
        int right=nums.size()-1;
        while(left<right){
            int mid=(left+right)>>1;
            if(nums[mid]>=target){
                right=mid;
            }
            else{
                left=mid+1;
            }
        }
        if(nums[left]!=target) return {-1,-1};
        int start=left;

        left=0;
        right=nums.size()-1;
        while(left<right){
            int mid=(left+right+1)>>1;
            if(nums[mid]<=target){
                left=mid;
            }
            else{
                right=mid-1;
            }
        }
        if(nums[left]!=target) return {-1,-1};
        int end=right;

        return {start,end};
    }
};

//作者：TeFuirnever
//        链接：https://leetcode-cn.com/problems/find-first-and-last-position-of-element-in-sorted-array/solution/shou-hui-man-hua-tu-jie-leetcodezhi-zai-pai-xu-shu/
//来源：力扣（LeetCode）
//著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。