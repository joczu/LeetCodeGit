//
// Created by Joc zu on 2020/5/15.
//

#ifndef LEETCODEGIT_面试题_10_09_排序矩阵查找_H
#define LEETCODEGIT_面试题_10_09_排序矩阵查找_H

#endif //LEETCODEGIT_面试题_10_09_排序矩阵查找_H

#include <vector>
using namespace std;

//class Solution {
//public:
//    bool searchMatrix(vector<vector<int>>& matrix, int target) { // 时间复杂度比较高
//        if(!matrix.size()) return false;
//        int m = matrix.size(), n = matrix[0].size();
//        int a = m, b = n;
//        for(int i = 0, j = 0; i < m && j < n; i++,j++)
//        {
//            a = i, b = j;
//            if(matrix[i][j] == target) return true;
//            else if(matrix[i][j] > target) break;
//        }
//        for(int x = a; x < m; x++)
//            for(int y = 0; y < n; y++)
//                if(matrix[x][y] == target)
//                    return true;
//        for(int x = 0; x < m; x++)
//            for(int y = b; y < n; y++)
//                if(matrix[x][y] == target)
//                    return true;
//        return false;
//    }
//};

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(!matrix.size()) return false;
        int m = matrix.size(), n = matrix[0].size();
        int row = 0, col = n-1;
        while (row < m && col >= 0)
        {
            if(matrix[row][col] == target) return true;
            else if(matrix[row][col] > target) col--;
            else row++;
        }
        return false;
    }
};