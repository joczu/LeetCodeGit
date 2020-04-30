//
// Created by Joc zu on 2020/4/23.
//

#ifndef LEETCODEGIT_67_二进制求和_H
#define LEETCODEGIT_67_二进制求和_H

#endif //LEETCODEGIT_67_二进制求和_H

#include <string>
using namespace std;

// 对应位相加
class Solution {
public:
    string addBinary(string a, string b) {
        int aSize  = a.size();
        int bSize  = b.size();
        for (int i = bSize-1; i >= 0; i--) {
            a[aSize-1] = a[aSize-1]-'0'+b[i];
            for (int j = aSize-1; j >= 0; j--) {
                if (a[j]-'0' == 2) {
                    a[j] = '0';
                    if (j != 0) a[j-1] = a[j-1]+1;
                    else {
                        a.insert(a.begin(),'1');
                        aSize++;
                    }
                }
            }
            aSize--;
            if (aSize == 0){
                for (int j = i-1; j >=0 ; j--) {
                    a.insert(a.begin(),b[j]);
                }
                break;
            }
        }
        return a;
    }
};

// 超出大小
//class Solution {
//public:
//    string addBinary(string a, string b) {
//        int aSize  = a.size();
//        int bSize  = b.size();
//        int A = 0;
//        int B = 0;
//        for (int i = aSize-1; i >= 0; i--) {
//            A = A + (int)pow(2,aSize-i-1)*(a[i]-'0');
//        }
//        for (int i = bSize-1; i >= 0; i--) {
//            B = B + (int)pow(2,bSize-i-1)*(b[i]-'0');
//        }
//        int C = A + B;
//        string rlt;
//        while (C/2>0){
//            rlt.insert(rlt.begin(),(char)(C%2+(int)('0')));
//            C = C/2;
//        }
//        rlt.insert(rlt.begin(),(char)(C%2+(int)('0')));
//        return rlt;
//    }
//};