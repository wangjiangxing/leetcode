//
// Created by cruisin on 2021/3/15.
//
#include <iostream>
#include <vector>
using namespace std;
bool isPalindrome(int x){
    if(x<0)
        return false;
    vector<int> saveNum;//保存数字的每一位
    while(x!=0)
    {
        saveNum.push_back(x%10);
        x/=10;
    }
    int sumNum=saveNum.size();
    for(int i=0;i<sumNum/2;i++)
    {
        if(saveNum[i]!=saveNum[sumNum-1-i])
            return false;
    }
    return true;
}
