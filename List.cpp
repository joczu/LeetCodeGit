//
// Created by Joc zu on 2020/4/30.
//

#include <iostream>
#include "LinkList.h"
using namespace std;




void printAnswer(LinkList linklist) {
    linklist.print();
    cout << "当前长度：";
    cout << linklist.getLength() << endl;
}

int main() {
    int n;
    cout << "请输入节点个数：";
    cin >> n;
    LinkList linklist;
    linklist.create();
    int num;
    while (n--) {
        cin >> num;
        linklist.insertHead(new Node(num));
    }
    cout << "头插法结果：";
    printAnswer(linklist);
//    cout << "尾插一个数：";
//    cin >> num;
//    linklist.insertTail(new Node(num));
//    cout << "尾插法结果：";
//    printAnswer(linklist);
//    cout << "想删除第几个：";
//    cin >> num;
//    linklist.deleteByIndex(num);
//    cout << "删除结果：";
//    printAnswer(linklist);
//    cout << "输入你想删除值为多少的节点(只删除首个)：";
//    cin >> num;
//    linklist.deleteByValueOnce(num);
//    cout << "删除结果：";
//    printAnswer(linklist);
    cout << "输入你想删除值为多少的节点(所有的)：";
    cin >> num;
    linklist.deleteByValueAll(num);
    cout << "删除结果：";
    printAnswer(linklist);
//    int replace;
//    cout << "输入你想修改第几个节点并改成值为多少：";
//    cin >> num >> replace;
//    linklist.editByIndex(num, replace);
//    cout << "修改结果：";
//    printAnswer(linklist);
}