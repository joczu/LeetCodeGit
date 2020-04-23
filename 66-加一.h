//
// Created by Joc zu on 2020/4/23.
//

#ifndef LEETCODEGIT_66_加一_H
#define LEETCODEGIT_66_加一_H

#endif //LEETCODEGIT_66_加一_H

#include <vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int digitsSize = digits.size();
        digits[digitsSize-1]++;
        for (int i = digitsSize-1; i >= 0; i--) {
            if(digits[i] >= 10){
                digits[i] = 0;
                if (i != 0) digits[i-1]++;
                else digits.insert(digits.begin(),1);
            }
        }
        return digits;
    }
};