//
// Created by Joc zu on 2020/5/12.
//

#ifndef LEETCODEGIT_202_快乐数_H
#define LEETCODEGIT_202_快乐数_H

#endif //LEETCODEGIT_202_快乐数_H

#include <unordered_map>
using namespace std;

//class Solution {
//public:
//    bool isHappy(int n) {
//        unordered_map<int,int> sum;
//        int square = n;
//        while(square != 1)
//        {
//            square = 0;
//            while(n)
//            {
//                square += pow(n%10,2);
//                n /= 10;
//            }
//            if(sum.count(square) != 0) return false;
//            else sum[square] = 1;
//            n = square;
//        }
//        return true;
//    }
//};

class Solution {
public:
    int bitSquareSum(int n) {
        int sum = 0;
        while(n > 0)
        {
            int bit = n % 10;
            sum += bit * bit;
            n = n / 10;
        }
        return sum;
    }

    bool isHappy(int n) {           // 判断是否循环就用快慢指针, 不宜先存入map统计出现次数
        int slow = n, fast = n;
        do{
            slow = bitSquareSum(slow);  // 每次走一步
            fast = bitSquareSum(fast);
            fast = bitSquareSum(fast);  // 每次走两步
        }while(slow != fast);
        return slow == 1;
    }
};


// https://leetcode-cn.com/problems/happy-number/solution/shi-yong-kuai-man-zhi-zhen-si-xiang-zhao-chu-xun-h/