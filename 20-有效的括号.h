//
// Created by Joc zu on 2020/4/14.
//

#ifndef LEETCODEGIT_20_有效的括号_H
#define LEETCODEGIT_20_有效的括号_H

#endif //LEETCODEGIT_20_有效的括号_H

#include <string>
#include <unordered_map>
#include <stack>

using namespace std;

//class Solution {
//public:
//    bool isValid(string s) {
//        if (s.size() == 0) return true;
//        if (s.size() == 1) return false;
//        for (int i = 1; i < s.size(); i++)
//        {
//            if ((s[i-1] == '(' && s[i] == ')') or (s[i-1] == '[' && s[i] == ']') or (s[i-1] == '{' && s[i] == '}'))
//            {
//                s.erase(s.begin()+i-1);
//                i--;
//                s.erase(s.begin()+i);
//                i = 0;
//            }
//        }
//        return s.size() == 0;
//    }
//};

// https://leetcode-cn.com/problems/valid-parentheses/solution/zhu-bu-fen-xi-tu-jie-zhan-zhan-shi-zui-biao-zhun-d/
/*
 * class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,int> m{{'(',1},{'[',2},{'{',3},
                                  {')',4},{']',5},{'}',6}};
        stack<char> st;
        bool istrue=true;
        for(char c:s){
            int flag=m[c];
            if(flag>=1&&flag<=3) st.push(c);
            else if(!st.empty()&&m[st.top()]==flag-3) st.pop();
            else {istrue=false;break;}
        }
        if(!st.empty()) istrue=false;
        return istrue;
    }
};
 */

