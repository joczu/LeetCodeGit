//
// Created by Joc zu on 2020/5/12.
//

#ifndef LEETCODEGIT_275_H指数2_H
#define LEETCODEGIT_275_H指数2_H

#endif //LEETCODEGIT_275_H指数2_H

#include <vector>
using namespace std;

//class Solution {
//public:
//    int hIndex(vector<int>& citations) {
//        int size = citations.size();
//        if(size == 0) return 0;
//        for(int i = 0; i < size; i++)
//        {
//            if(citations[i] >= size - i) return size-i;
//        }
//        return 0;
//    }
//};

class Solution {   // 二分
public:
    int hIndex(vector<int>& citations) {
        int l = 0, r = citations.size();
        while (l < r)
        {
            int mid = r+l+1 >>1;
            if(citations[citations.size() - mid] >= mid) l = mid;
            else r = mid-1;
        }
        return r;
    }
};