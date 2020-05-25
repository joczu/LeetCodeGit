//
// Created by Joc zu on 2020/5/19.
//

#ifndef LEETCODEGIT_无序无重复数组中的第K小_H
#define LEETCODEGIT_无序无重复数组中的第K小_H

#endif //LEETCODEGIT_无序无重复数组中的第K小_H

//链接：https://www.nowcoder.com/questionTerminal/ec2575fb877d41c9a33d9bab2694ba47

class KthNumbers {
public:
    int quickFind(vector<int> &arr, int start, int end, int target) {

        if(start == end) {
            return arr[start];
        }
        int current = start;
        int left = start + 1;
        int right = end;
        while(left <= right) {
            while(left <= right && arr[right] >= arr[current]) {
                right--;
            }
            if(left <= right) {
                int tmp = arr[right];
                arr[right] = arr[current];
                arr[current] = tmp;
                current = right;
            }
            while(left <= right && arr[left] <= arr[current]) {
                left++;
            }
            if(left <= right) {
                int tmp = arr[left];
                arr[left] = arr[current];
                arr[current] = tmp;
                current = left;
            }
        }
        if(current < target) {
            return quickFind(arr, current + 1, end, target);
        }
        if(current > target) {
            return quickFind(arr, start, current - 1, target);
        }
        return arr[current];
    }
    vector<int> findKthNumbers(vector<int> A, int n, int k) {
        // write code here
        vector<int> res;
        if(k > n || n < 1) {
            return res;
        }
        res.assign(A.begin(), A.end());
        int val = quickFind(res, 0, n - 1, k - 1);
        res.clear();
        for(int i = 0; i < A.size(); i++) {
            if(A[i] <= val) {
                res.push_back(A[i]);
            }
        }
        return res;
    }
};