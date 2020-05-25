//
// Created by Joc zu on 2020/5/24.
//

#ifndef LEETCODEGIT_面试题16_数值的整数次方_H
#define LEETCODEGIT_面试题16_数值的整数次方_H

#endif //LEETCODEGIT_面试题16_数值的整数次方_H

class Solution {
public:
    double myPow(double x, int n) {
        if(n == 0 || x == 1) return 1;
        double res = 1;
        long n_tmp = n;
        if(n < 0) {
            x = 1/x;
            n_tmp *= -1;   // 取负值，不能再用int
        }
        while(n_tmp)
        {
            if(n_tmp & 1) res *= x;
            x *= x;
            n_tmp >>= 1;
        }
        return res;
    }
};