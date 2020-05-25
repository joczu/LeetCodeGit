//
// Created by Joc zu on 2020/5/13.
//

#ifndef LEETCODEGIT_204_计数质数_H
#define LEETCODEGIT_204_计数质数_H

#endif //LEETCODEGIT_204_计数质数_H

class Solution {
public:
    int countPrimes(int n) {
        if(n < 3) return 0;
        int count = 1;
        for(int i = 3; i < n; i++)
        {
            if ((i & 1) == 0) continue; // 2^n  为偶数
            bool flag = true;
            for(int j = 3; j * j <= i; j += 2)
            {
                if(i%j == 0) {
                    flag = false;
                    break;
                }
            }
            if(flag) count++;
        }
        return count;
    }
};
// https://leetcode-cn.com/problems/count-primes/solution/ji-shu-zhi-shu-bao-li-fa-ji-you-hua-shai-fa-ji-you/