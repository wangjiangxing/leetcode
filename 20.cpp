//
// Created by cruisin on 2021/3/19.
//有效的括号给定一个只包括 '('，')'，'{'，'}'，'['，']' 的字符串 s ，判断字符串是否有效。
#include "allMyNeed.h"
using namespace std;
bool isValid(string s);
bool isValid(string s){
    string stack="";
    for(int i=0;i<s.size();i++)
    {
        if (stack.empty())
            stack.push_back(s[i]);
        else{
            bool judge1=(stack[stack.size()-1]=='[')&&(s[i]==']');
            bool judge2=(stack[stack.size()-1]=='(')&&(s[i]==')');
            bool judge3=(stack[stack.size()-1]=='{')&&(s[i]=='}');
            if (judge1||judge2||judge3)
                stack.pop_back();
            else
                stack.push_back(s[i]);
        }
    }
    if (stack.empty())
        return true;
    return false;
}

