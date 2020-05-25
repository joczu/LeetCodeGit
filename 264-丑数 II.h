//
// Created by Joc zu on 2020/5/13.
//

#ifndef LEETCODEGIT_264_丑数_II_H
#define LEETCODEGIT_264_丑数_II_H

#endif //LEETCODEGIT_264_丑数_II_H

#include <queue>
using namespace std;

//class Solution {
//public:
//    int nthUglyNumber(int n) {   // 小顶堆的方法是先存再排
//        priority_queue <double,vector<double>,greater<double> > q;   // 小顶堆： 先输出最小值
//        double answer=1;
//        for (int i=1;i<n;++i)
//        {
//            q.push(answer*2);
//            q.push(answer*3);
//            q.push(answer*5);
//            answer=q.top();
//            q.pop();
//            while (!q.empty() && answer==q.top())
//                q.pop();
//        }
//        return answer;
//    }
//};

// https://leetcode-cn.com/problems/ugly-number-ii/solution/bao-li-you-xian-dui-lie-xiao-ding-dui-dong-tai-gui/


class Solution {   // 动态规划 ，dp的方法则是先排再存
public:
    int nthUglyNumber(int n) {
        vector<int> res(1,1);
        int i2=0,i3=0,i5=0,i=1;   // 代表的是第几个数的2倍、第几个数3倍、第几个数5倍
        while(i++<n){
            int tmp=min(2*res[i2],min(3*res[i3],5*res[i5]));   // dp[i]=min(dp[i_2]*2,dp[i_3]*3,dp[i_5]*5)
            res.push_back(tmp);
            if(tmp==2*res[i2]) i2++;
            if(tmp==3*res[i3]) i3++;
            if(tmp==5*res[i5]) i5++;
        }
        return res.back();
    }
};

// https://leetcode-cn.com/problems/ugly-number-ii/solution dong-tai-gui-hua-qiu-jie-by-tangzixia-2/