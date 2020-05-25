//
// Created by Joc zu on 2020/4/21.
//

#ifndef LEETCODEGIT_面试题05_替换空格_H
#define LEETCODEGIT_面试题05_替换空格_H

#endif //LEETCODEGIT_面试题05_替换空格_H

#include <string>
using namespace std;

//class Solution {
//public:
//    string replaceSpace(string s) {
//        string rlt;
//        for (int i = 0; i < s.size(); ++i) {
//            if (s[i] == ' ') rlt.append("%20");  // s.append(string)
//            else rlt.push_back(s[i]); // s.push_back(char)
//        }
//        return rlt;
//    }
//};

class Solution {
public:
    string replaceSpace(string s) {
        int sSize = s.size();
        if(sSize == 0) return s;
        int blankNum = 0;
        for (auto x : s) if(x == ' ') blankNum++;
        int p1 = sSize-1, p2 = sSize + 2*blankNum -1;
        for (int i = 0; i < 2*blankNum; ++i) {
            s.push_back(' ');
        }
        while (p1 >= 0 && p2 >= 0)
        {
            if(s[p1] != ' ') s[p2--] = s[p1--];
            else {
                s[p2--] = '0';
                s[p2--] = '2';
                s[p2--] = '%';
                p1--;
            }
        }
        return s;
    }
};