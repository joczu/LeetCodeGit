//
// Created by Joc zu on 2020/5/12.
//

#include <iostream>
#include<vector>
using namespace std;

int main() {
    int nums,input;
    cin >> nums;
    vector<int> rlt(nums,-1);
    vector<int> arr;
    while(nums) {
        cin >> input;
        arr.push_back(input);
        nums--;
    }
    for (int i = 0; i < arr.size(); i++)
    {
        int l = arr[i];
        for (int j = i+1; j < arr.size(); j++) {
            int r = arr[j];
            while(l || r)
            {
                if(l%2 == r%2) break;
                l /= 2;
                r /= 2;
            }
            if(!l && !r)
            {
                rlt[i] = 1;
                rlt[j] = 1;
            }
        }
    }
    for(auto x:rlt) cout << x;
    return 0;
}