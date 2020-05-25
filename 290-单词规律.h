//
// Created by Joc zu on 2020/5/11.
//

#ifndef LEETCODEGIT_290_单词规律_H
#define LEETCODEGIT_290_单词规律_H

#endif //LEETCODEGIT_290_单词规律_H

#include<vector>
#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool wordPattern(string pattern, string str) {
        if(pattern.size() == 0 && str.size() == 0) return true;
        str.push_back(' ');
        int strSize = str.size();
        vector<string> s;
        int begin = 0;
        for(int i = 0; i < strSize; i++)
        {
            if(str[i] == ' ')
            {
                s.push_back(str.substr(begin, i-begin));
                begin = i + 1;
            }
        }
        unordered_map<char,string> m1;
        unordered_map<string,char> m2;
        int sSize = s.size();
        if(pattern.size() != sSize) return false;
        for(int i = 0; i < sSize; i++)   // char->string映射
        {
            if(m1.find(pattern[i]) != m1.end())  // 查找key为pattern[i]的value值
            {
                if(m1[pattern[i]] != s[i]) return false;
            }else
            {
                m1[pattern[i]] = s[i];
            }
        }
        for(int i = 0; i < sSize; i++)   // char->string映射 必须做两次映射  如 abba dog dog dog dog
        {
            if(m2.find(s[i]) != m2.end())
            {
                if(m2[s[i]] != pattern[i]) return false;
            }else
            {
                m2[s[i]] = pattern[i];
            }
        }
        return true;
    }
};