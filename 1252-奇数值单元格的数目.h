//
// Created by Joc zu on 2020/4/21.
//

#ifndef LEETCODEGIT_1252_奇数值单元格的数目_H
#define LEETCODEGIT_1252_奇数值单元格的数目_H

#endif //LEETCODEGIT_1252_奇数值单元格的数目_H

#include <vector>
using namespace std;

class Solution {
public:
    int oddCells(int n, int m, vector<vector<int>>& indices) {
        int rlt = 0;
        vector<vector<int>> matrix(n,vector<int>(m));
        for (int i = 0; i < indices.size(); ++i) {
            for (int j = 0; j < matrix[0].size(); ++j) {
                matrix[indices[i][0]][j] += 1;
            }
            for (int j = 0; j < matrix.size(); ++j) {
                matrix[j][indices[i][1]] += 1;
            }
        }
        for (int k = 0; k < matrix.size(); ++k) {
            for (int i = 0; i < matrix[0].size(); ++i) {
                if (matrix[k][i]%2 != 0) rlt += 1;
            }
        }
        return rlt;
    }
};