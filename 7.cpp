//
// Created by cruisin on 2021/3/14.
//
//给你一个 32 位的有符号整数 x ，返回将 x 中的数字部分反转后的结果。
//
//如果反转后整数超过 32 位的有符号整数的表示范围，就返回 0。
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/reverse-integer
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
#include<iostream>
using namespace std;
int reverse(int x) {
    int flag2=0;//用来判断是不是已经有一个非0实数了
    int saveNum[32];
    int i=0;
    int flag=0;//用来判断是不是正数
    //x正好在边界-2^31或者为0
    if ((x==-2147483648)||(x==0))
        return 0;
    if(x<0) {
        flag = 1;
        x = -x;
    }
    while (x!=0)
    {
        int tmp=x%10;
        if((tmp!=0)||(flag2==1))
        {
            flag2=1;
            saveNum[i]=tmp;
            i++;
        }
        x/=10;
    }
    int returnNum=0;//返回的数字
    for(int j=0;j<i;j++)
    {
        if(returnNum>(2147483648/10))
            return 0;
        returnNum=returnNum*10+saveNum[j];
    }

    if (flag==1)
        returnNum=-returnNum;
    //cout<<returnNum;
    return returnNum;
}
