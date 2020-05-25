//
// Created by Joc zu on 2020/5/23.
//

#ifndef LEETCODEGIT_面试题12_矩阵中的路径_H
#define LEETCODEGIT_面试题12_矩阵中的路径_H

#endif //LEETCODEGIT_面试题12_矩阵中的路径_H

#include "vector"
#include "string"
using namespace std;

class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        for (int i = 0; i < board.size(); ++i) {
            for (int j = 0; j < board[0].size(); ++j) {
                if(dfs(board, word, i, j, 0)) return true;
            }
        }
        return false;
    }
    bool dfs(vector<vector<char>>& board, string word, int i, int j, int k)
    {
        if(i >= board.size() || i < 0 || j >= board[0].size() || j < 0 || board[i][j] != word[k]) return false;
        if(k == word.size()-1) return true;
        char tmp = board[i][j];
        board[i][j] = '/';
        bool res = dfs(board, word, i-1, j, k+1) || dfs(board, word, i+1, j, k+1) || dfs(board, word, i, j-1, k+1) || dfs(board, word, i, j+1, k+1);
        board[i][j] = tmp;
        return res;
    }
};