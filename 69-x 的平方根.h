//
// Created by Joc zu on 2020/5/9.
//

#ifndef LEETCODEGIT_69_X_的平方根_H
#define LEETCODEGIT_69_X_的平方根_H

#endif //LEETCODEGIT_69_X_的平方根_H

class Solution {
public:
    int mySqrt(int x) {
        int l = 0, r = x;
        while(l <= r)
        {
            long mid = l+(r-l)/2;
            if(mid*mid>x) r = mid-1;
            else if(mid*mid<x) l = mid+1;
            else return mid;
        }
        return r;
    }
};