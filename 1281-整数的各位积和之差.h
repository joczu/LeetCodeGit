//
// Created by Joc zu on 2020/4/13.
//

#ifndef LEETCODEGIT_1281_整数的各位积和之差_H
#define LEETCODEGIT_1281_整数的各位积和之差_H

#endif //LEETCODEGIT_1281_整数的各位积和之差_H

class Solution {
public:
    int subtractProductAndSum(int n) {
        int product = 1;
        int sum = 0;
        int remainder = 1;
        while (n >= 10)
        {
            remainder = n % 10;
            product = product * remainder;
            sum = sum + remainder;
            n = n / 10;
        }
        product = product * n;
        sum = sum + n;
        return product - sum;
    }
};