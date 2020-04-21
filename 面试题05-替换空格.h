//
// Created by Joc zu on 2020/4/21.
//

#ifndef LEETCODEGIT_面试题05_替换空格_H
#define LEETCODEGIT_面试题05_替换空格_H

#endif //LEETCODEGIT_面试题05_替换空格_H

#include <string>
using namespace std;

class Solution {
public:
    string replaceSpace(string s) {
        string rlt;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == ' ') rlt.append("%20");  // s.append(string)
            else rlt.push_back(s[i]); // s.push_back(char)
        }
        return rlt;
    }
};