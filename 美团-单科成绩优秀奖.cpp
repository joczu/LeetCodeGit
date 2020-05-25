//
// Created by Joc zu on 2020/5/12.
//

#include <iostream>
#include<vector>
using namespace std;

int main() {
    int n,m,input;
    cin >> n >> m;
    vector<vector<int>> arr(n,vector<int>(m));
    for (int k = 0; k < n; ++k) {
        for (int i = 0; i < m; ++i) {
            cin >> input;
            arr[k][i] = input;
        }
    }
    vector<int> person(n);
    for (int k = 0; k < m; ++k) {
        int tmp = 0;
        for (int i = 0; i < n; ++i) {

            if(arr[i][k] >= tmp) {
                tmp = arr[i][k];
            }
        }
        for (int j = 0; j < n; ++j) {
            if (arr[j][k] == tmp) person[j]++;
        }
    }
    int count = 0;
    for (int j = 0; j < n; ++j) {
        if(person[j]!=0) count++;
    }
    cout << count;
    return 0;
}

