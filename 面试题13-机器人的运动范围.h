//
// Created by Joc zu on 2020/5/23.
//

#ifndef LEETCODEGIT_面试题13_机器人的运动范围_H
#define LEETCODEGIT_面试题13_机器人的运动范围_H

#endif //LEETCODEGIT_面试题13_机器人的运动范围_H

#include "iostream"
#include "vector"
using namespace std;
class Solution {
public:
    int movingCount(int m, int n, int k) {
        int res = 0;
        vector<vector <int >> visit(m,vector<int>(n,0));
        visit[0][0] = 1;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if(i >= 1) visit[i][j] |= visit[i-1][j];
                if(j >= 1) visit[i][j] |= visit[i][j-1];
                int res_tmp = res;
                if(visit[i][j])
                {
                    int m_tmp = i, n_tmp = j, sum = 0;
                    while (m_tmp)
                    {
                        sum += m_tmp % 10;
                        m_tmp = m_tmp/10;
                    }
                    while (n_tmp)
                    {
                        sum += n_tmp % 10;
                        n_tmp = n_tmp/10;
                    }
                    if(sum <= k) {
                        res++;
                        cout << i << ' '<< j<<endl;
                    }
                }
                if(res_tmp == res) visit[i][j] = 0;
            }
        }
        return res;
    }
};