//
// Created by cruisin on 2021/3/19.
//
//编写一个函数来查找最长公共前缀
//思路：一步步查看公共前缀，直到不相等或者到某一个字符串尾部退出
//执行用时：0 ms 在所有 C++ 提交中击败了 100.00%的用户
//内存消耗：8.9 MB, 在所有 C++ 提交中击败了85.32%的用户
#include <iostream>
#include <vector>
#include <string>
using namespace std;
string longestCommonPrefix(vector<string>& strs);
string longestCommonPrefix(vector<string>& strs)
{
    int minLen=200;
    string retString="";
    if (strs.empty())//注意，这里需要判断容器里面是不是为空，否则之后会访问越界
        return retString;
    for(int i=0;i<strs.size();i++)
        minLen=(strs[i].size()>minLen?minLen:strs[i].size());
    int j=0;
    for(int i=0;i<minLen;i++)
    {
        for(j=0;j<strs.size()-1;j++)
        {
            if (strs[j][i]!=strs[j+1][i])
                return retString;
        }
        if (j==strs.size()-1)
            retString.push_back(strs[0][i]);
    }
    return retString;
}