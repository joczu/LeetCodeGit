//
// Created by Joc zu on 2020/4/23.
//

#ifndef LEETCODEGIT_43_字符串相乘_H
#define LEETCODEGIT_43_字符串相乘_H

#endif //LEETCODEGIT_43_字符串相乘_H

#include <string>
using namespace std;

// 别人的解法（经典！妙）
class Solution {
public:
    string multiply(string num1, string num2) {
        if (num1=="0" || num2=="0") return "0";
        vector<int> result(num1.size() + num2.size() + 1, 0);
        for (int i = 0; i < num1.size(); i++) {
            for (int j = 0; j < num2.size(); j++) {
                result[i+j+1] += (num1[i] - '0') * (num2[j] - '0');
            }
        }
        for (int i = result.size() - 1; i > 0; i--) {
            if (result[i] < 10) continue;
            result[i-1] += result[i] / 10;
            result[i] %= 10;
        }
        string r = "";
        bool zero = true;
        for (int i = 0; i < result.size() - 1; i++) {
            if (zero && result[i] == 0) continue;
            zero = false;
            r.push_back(result[i]+'0');
        }
        return r;
    }
};

// https://leetcode-cn.com/problems/multiply-strings/solution/dong-hua-mo-ni-shu-shi-cheng-fa-c-shuang-bai-by-zh/

// 自己的解法，太慢，太耗费空间
//class Solution {
//public:
//    string multiply(string num1, string num2) {
//        string rlt;
//        int num1Size = num1.size();
//        int num2Size = num2.size();
//        int mul;
//        int carry = 0;
//        for (int i = num2Size-1; i >= 0; i--) {
//            string tmp;
//            for (int k = 0; k < num2Size-1-i; ++k) {
//                tmp.insert(tmp.begin(),'0');
//            }
//            for (int j = num1Size-1; j >= 0; j--) {
//                mul = (num1[j]-'0')*(num2[i]-'0') + carry;
//                if(mul >= 10) {
//                    tmp.insert(tmp.begin(),mul%10+'0');
//                    carry = mul/10;
//                    if (j == 0) {
//                        tmp.insert(tmp.begin(),carry+'0');
//                        carry = 0;
//                    }
//                } else {
//                    tmp.insert(tmp.begin(),mul+'0');
//                    carry = 0;
//                }
//            }
//            if(i == num2Size-1) rlt = tmp;
//            else rlt = stringAdd(rlt, tmp);
//            cout << tmp <<'\n';
//        }
//        if(rlt[0] == '0') return "0";
//        return rlt;
//    }
//    string stringAdd(string num1, string num2){
//        int num1Size = num1.size();
//        int num2Size = num2.size();
//        int tmp;
//        for (int i = num2Size-1; i >= 0; i--) {
//            tmp = num1[num1Size-1] - '0' + num2[i] - '0';
//            for (int j = num1Size-1; j >= 0; j--) {
//                if(tmp >= 10){
//                    num1[j] = tmp%10 + '0';
//                    if(j != 0) tmp = num1[j-1] + 1 - '0';
//                    else {
//                        num1.insert(num1.begin(),'1');
//                        num1Size++;
//                    }
//                } else {
//                    num1[j] = tmp + '0';
//                    break;
//                }
//            }
//            num1Size--;
//            if (num1Size == 0){
//                for (int j = i-1; j >=0 ; j--) {
//                    num1.insert(num1.begin(),num2[j]);
//                }
//                break;
//            }
//        }
//        return num1;
//    }
//};