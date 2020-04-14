//
// Created by Joc zu on 2020/4/13.
//

#ifndef LEETCODEGIT_1370_上升下降字符串_H
#define LEETCODEGIT_1370_上升下降字符串_H

#endif //LEETCODEGIT_1370_上升下降字符串_H

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    string sortString(string r) {
        string remain;
        int len = r.size();
        string rlt;
        bool flag = true;
        while (true)
        {
            sort(r.begin(),r.end()); // 升序
            for (int i = 1; i< r.size(); i++)
            {
                if(r[i] == r[i-1])
                {
                    r.erase(r.begin()+i-1);  // 去重，r：排好序的
                    remain.push_back(r[i-1]);  // 剩余的
                    i--;
                }
            }
            reverse(remain.begin(),remain.end());
            rlt.append(r);
            if (rlt.size() == len) break;
            r = remain;
            remain.clear();
            for (int j = 1; j< r.size(); j++)
            {
                if(r[j] == r[j-1])
                {
                    r.erase(r.begin()+j-1);  // 去重，r：排好序的
                    remain.push_back(r[j-1]);  // 剩余的
                    j--;
                }
            }
            rlt.append(r);
            if (rlt.size() == len) break;
            r = remain;
            remain.clear();
        }
        return rlt;
    }
};

/*
class Solution {
public:
    //题目描述的复杂，其实就是不停地按字典序升序追加，降序追加，每次加一个
    string sortString(string s) {
        vector<int>tmp(26);
        for(int i=0;i<s.size();i++)
            tmp[s[i]-'a']++;
        string ret;
        while(ret.size()<s.size())
        {
            for(int i=0;i<26;i++)
                if(tmp[i])
                    ret+=i+'a',tmp[i]--;
            for(int i=25;i>=0;i--)
                if(tmp[i])
                    ret+=i+'a',tmp[i]--;
        }
        return ret;
    }
};
 */