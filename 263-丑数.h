//
// Created by Joc zu on 2020/5/13.
//

#ifndef LEETCODEGIT_263_丑数_H
#define LEETCODEGIT_263_丑数_H

#endif //LEETCODEGIT_263_丑数_H

class Solution {
public:
    bool isUgly(int num) {
        if(num < 1) return false;
        while(true)
        {
            int tmp = num;
            if(!(num%2)) num /= 2;
            if(!(num%3)) num /= 3;
            if(!(num%5)) num /= 5;
            if(num == 1) return true;
            if(num == 0) return false;
            if(num == tmp) return false;
        }
    }
};
