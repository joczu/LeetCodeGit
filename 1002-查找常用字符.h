//
// Created by Joc zu on 2020/4/21.
//

#ifndef LEETCODEGIT_1002_查找常用字符_H
#define LEETCODEGIT_1002_查找常用字符_H

#endif //LEETCODEGIT_1002_查找常用字符_H

#include <string>
using namespace std;

class Solution {
public:
    vector<string> commonChars(vector<string>& A) {
        vector<string> out;
        int num[100][26]={0};                  //建立一个二维数组，标记所有出现的字母次数
        for(int i =0;i<A.size() ;i++)
            for(int j=0;j<A[i].size();j++)
                num[i][(A[i][j]-'a')]++;

        for(int j=0;j<26;j++)                  //将所有列的最小值存到第一行
            for(int i=1;i<A.size();i++)
                num[0][j] = min (num[0][j],num[i][j]);

        string str;                           //按照第一行保存的次数输出相应字母
        for(int i=0;i<26;i++){
            while(num[0][i]--)
            {
                str.clear();
                str.push_back((char)('a'+i));
                out.push_back(str);
            }
        }
        return out;
    }
};

/*
 * 建立一个二维数组，行数是输入单词的个数（最大100），列数是26个英文字母。
记下来每个单词中每个字母出现的次数，然后直接在这个二维数组上进行比较，
保证第一行是该字母在所有单词中出现的最小次数。
最后输出即可

作者：lvmingzhe
链接：https://leetcode-cn.com/problems/find-common-characters/solution/cjian-dan-zhi-guan-jie-fa-yong-shi-ji-bai-96-kong-/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
 */