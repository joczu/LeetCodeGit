//
// Created by Joc zu on 2020/4/20.
//

#ifndef LEETCODEGIT_414_第三大的数_H
#define LEETCODEGIT_414_第三大的数_H

#endif //LEETCODEGIT_414_第三大的数_H

#include <vector>
#include <set>
using namespace std;


class Solution {
public:
    int thirdMax(vector<int>& nums)
    {
        set<int> s(nums.begin(), nums.end());
        auto it = s.end();
        it--;
        if(s.size() >= 3){
            it--;
            it--;
        }
        return *it;
    }
};