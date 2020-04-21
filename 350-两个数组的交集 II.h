//
// Created by Joc zu on 2020/4/21.
//

#ifndef LEETCODEGIT_350_两个数组的交集_II_H
#define LEETCODEGIT_350_两个数组的交集_II_H

#endif //LEETCODEGIT_350_两个数组的交集_II_H

#include <vector>
using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int > rlt;
        for (int i = 0; i < nums1.size(); ++i) {
            for (int j = 0; j < nums2.size(); ++j) {
                if (nums1[i] == nums2[j])
                {
                    rlt.push_back(nums1[i]);
                    nums1.erase(nums1.begin()+i);
                    nums2.erase(nums2.begin()+j);
                    i--;
//                    j--;
                    break;
                }
            }
        }
        return rlt;
    }
};

/*
 *
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {

        vector<int> res;
        unordered_map<int,int> ts;

        for(int i:nums1)
            ts[i]++;//使key为i的对应value值++,value值表示对应的key在ts这个map中有几个

         for(int i:nums2)
            if(ts.find(i)!=ts.end() && --ts[i] >= 0)    //如果map中此时key为i对应的value大于等于1,即交集元素
            res.push_back(i);//加入到答案vector中

       return res;
    }
};

链接：https://leetcode-cn.com/problems/intersection-of-two-arrays-ii/solution/c-chao-ji-jian-dan-ji-bai-99challenge-me-z-by-zrit/
 */