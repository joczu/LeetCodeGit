//
// Created by Joc zu on 2020/4/24.
//

#ifndef LEETCODEGIT_415_字符串相加_H
#define LEETCODEGIT_415_字符串相加_H

#endif //LEETCODEGIT_415_字符串相加_H

#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    string addStrings(string num1, string num2) {
        int maxSize = max(num1.size(),num2.size());
        while (num1.size()<maxSize) num1.insert(num1.begin(),'0');
        while (num2.size()<maxSize) num2.insert(num2.begin(),'0');
        vector<int> sumList(maxSize+1);
        for (int i = 0; i < maxSize; ++i) {
            sumList[i+1] = num1[i]-'0' + num2[i]-'0';
        }
        for (int j = maxSize; j >= 0; j--) {
            if (sumList[j] >= 10) {
                sumList[j] %= 10;
                sumList[j-1] += 1;
            }
        }
        string rlt;
        for (int k = 0; k < maxSize+1; ++k) {
            if(sumList[k] == 0 && k == 0) continue;
            rlt.push_back(sumList[k]+'0');
        }
        return rlt;
    }
};

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