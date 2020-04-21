//
// Created by Joc zu on 2020/4/21.
//

#ifndef LEETCODEGIT_1221_分割平衡字符串_H
#define LEETCODEGIT_1221_分割平衡字符串_H

#endif //LEETCODEGIT_1221_分割平衡字符串_H

#include <string>
using namespace std;

class Solution {
public:
    int balancedStringSplit(string s) {
        int rlt = 0, r = 0, l = 0;
        for (int i = 0; i < s.size(); ++i) {
            if(s[i] == 'R') r += 1;
            else l += 1;
            if(r == l) rlt += 1;
        }
        return rlt;
    }
};