//
// Created by Joc zu on 2020/5/24.
//

#ifndef LEETCODEGIT_面试题17_打印从1到最大的N位数_H
#define LEETCODEGIT_面试题17_打印从1到最大的N位数_H

#endif //LEETCODEGIT_面试题17_打印从1到最大的N位数_H

#include <cmath>
#include "vector"
using namespace std;

//class Solution {
//public:
//    vector<int> printNumbers(int n) {   // 方法一： 幂法，可能无法避免大数问题
//        int num = pow(10,n);
//        vector<int> res(num-1);
//        for(int i = 1; i < num; i++) res[i-1] = i;
//        return res;
//    }
//};


class Solution {   // 方法二：string方法，避免大数问题
public:
    vector<int> res;
    vector<int> printNumbers(int n) {
        if (n <= 0) return res;
        //创建一个能容纳最大值的字符数组
        string number(n, '0');
        //初始全部设置为0
        while (!Increment(number))
        {
            saveNumber(number);
        }
        return res;
    }
    bool Increment(string& number) {
        //注意要使用引用传递，否则无法修改number
        bool isOverflow = false;//检测是否越界
        int nTakeOver = 0;//存储进位
        int nLength = number.size();
        for (int i = nLength - 1; i >= 0; i--)
        {
            int nSum = number[i] - '0' + nTakeOver;
            if (i == nLength - 1)
                //如果是第一位，进位
            {
                nSum++;
            }
            if (nSum >= 10)//有进位
            {
                if (i == 0)
                    //如果是最高位有进位，说明超过了给定得到最大值，越界
                {
                    isOverflow = true;
                }
                else
                {
                    nTakeOver = 1;
                    number[i] = nSum - 10 + '0';//对第i位进行设置
                }
            }
            else//没有进位
                //设置第i位数字
                //并直接跳出循环
            {
                number[i] = nSum + '0';
                break;
            }
        }
        return isOverflow;
    }
    void saveNumber(string number)
    //由于此处输出，不需要修改number，因此不需要加引用
    {
        string s = "";
        bool isBegin0 = true;
        string::iterator it = number.begin();
        while (it != number.end())
        {
            if (isBegin0 && *it != '0') isBegin0 = false;
            if (!isBegin0)
            {
                s += *it;
            }
            it++;
        }
        int num = stoi(s);
        res.push_back(num);
    }
};

// 链接：https://leetcode-cn.com/problems/da-yin-cong-1dao-zui-da-de-nwei-shu-lcof/solution/c-3chong-jie-fa-by-xdb/
