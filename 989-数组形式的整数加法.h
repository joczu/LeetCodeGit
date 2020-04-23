//
// Created by Joc zu on 2020/4/23.
//

#ifndef LEETCODEGIT_989_数组形式的整数加法_H
#define LEETCODEGIT_989_数组形式的整数加法_H

#endif //LEETCODEGIT_989_数组形式的整数加法_H

#include <vector>
using namespace std;

class Solution {
public:
    vector<int> addToArrayForm(vector<int>& A, int K) {
        int ASize = A.size();
        A[ASize-1] = A[ASize-1] + K;
        int tmp;
        for (int i = ASize-1; i >= 0; i--) {
            if (A[i] >= 10){
                tmp = A[i];
                A[i] = tmp%10;
                if (i != 0) A[i-1] = A[i-1] + tmp/10;
                else {
                    tmp = tmp/10;
                    while (tmp/10 > 0 || tmp%10 > 0)
                    {
                        A.insert(A.begin(),tmp%10);
                        tmp = tmp/10;
                    }
                }
            }
        }
        return A;
    }
};