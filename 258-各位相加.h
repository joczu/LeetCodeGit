//
// Created by Joc zu on 2020/5/12.
//

#ifndef LEETCODEGIT_258_各位相加_H
#define LEETCODEGIT_258_各位相加_H

#endif //LEETCODEGIT_258_各位相加_H

class Solution {
public:
    int addDigits(int num) {   // 求数根
        if(num == 0) return 0;
        return (num-1)%9+1;
    }
};