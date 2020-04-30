//
// Created by Joc zu on 2020/4/30.
//

#ifndef LEETCODEGIT_278_第一个错误的版本_H
#define LEETCODEGIT_278_第一个错误的版本_H

#endif //LEETCODEGIT_278_第一个错误的版本_H

class Solution {
public:
    int firstBadVersion(int n, int m) {  // n:总版本数[1,2,3,...,n]  m:首次出错版本号
        int left = 0;
        int right = n;
        while(left < right){
            int mid = left + (right - left)/2;
            if(mid >= m) right = mid;
            else left = mid + 1;
        }
        return left;
    }
};