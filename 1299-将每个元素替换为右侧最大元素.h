//
// Created by Joc zu on 2020/4/20.
//

#ifndef LEETCODEGIT_1299_将每个元素替换为右侧最大元素_H
#define LEETCODEGIT_1299_将每个元素替换为右侧最大元素_H

#endif //LEETCODEGIT_1299_将每个元素替换为右侧最大元素_H

#include <vector>
using namespace std;

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int i = 0;
        int len = arr.size();
        int max = 0;
        while (i < len)
        {
            for (int j = i + 1; j < len; j++)
            {
                if (arr[j] > max) max = arr[j];
            }
            arr[i] = max;
            max = 0;
            i++;
        }
        arr[len-1] = -1;
        return arr;
    }
};

/*
class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n);
        ans[n - 1] = -1;
        for (int i = n - 2; i >= 0; --i) {
            ans[i] = max(ans[i + 1], arr[i + 1]);
        }
        return ans;
    }
};

链接：https://leetcode-cn.com/problems/replace-elements-with-greatest-element-on-right-side/solution/jiang-mei-ge-yuan-su-ti-huan-wei-you-ce-zui-da-y-5/

 */