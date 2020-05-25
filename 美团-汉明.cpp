//
// Created by Joc zu on 2020/5/12.
//

#include <iostream>
#include<vector>
using namespace std;

int main() {
    int nums,input;
    cin >> nums;
    vector<int> arr;
    int copyNums = nums;
    while(nums) {
        cin >> input;
        arr.push_back(input);
        nums--;
    }
    int times = 0;
    if (copyNums == 1)
    {
        while (arr[0])
        {
            times++;
            arr[0] /= 2;
        }
        cout << times;
        return 0;
    }
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i+1; j < arr.size(); ++j) {
            int tmp = 0;
            while(arr[i] || arr[j])
            {
                if(arr[i]%2 != arr[j]%2) tmp++;
                arr[i] /= 2;
                arr[j] /= 2;
            }
            if(tmp>times) times = tmp;
        }
    }
    cout << times;
    return 0;
}