//
// Created by cruisin on 2021/3/16.
//
#include "allMyNeed.h"
using namespace std;

int romanToInt(string s) {
    int returnNum=0;
    int len=s.length()-1;
    for(int i=0;i<len;i++)
    {
        switch(s[i]){
            case 'I':
                if((s[i+1]=='V')||s[i+1]=='X'){
                    returnNum-=1;
                    break;
                }
                returnNum+=1;
                break;
            case 'V':
                returnNum+=5;
                break;
            case 'X':
                if((s[i+1]=='L')||(s[i+1]=='C'))
                {
                    returnNum-=10;
                    break;
                }
                returnNum+=10;
                break;
            case 'L':
                returnNum+=50;
                break;
            case 'C':
                if((s[i+1]=='D')||(s[i+1]=='M'))
                {
                    returnNum-=100;
                    break;
                }
                returnNum+=100;
                break;
            case 'D':
                returnNum+=500;
                break;
            case 'M':
                returnNum+=1000;
        }
    }
    switch (s[len]) {
        case 'I':
            returnNum+=1;break;
        case 'V':
            returnNum+=5;break;
        case 'X':
            returnNum+=10;break;
        case 'L':
            returnNum+=50;break;
        case 'C':
            returnNum+=100;break;
        case 'D':
            returnNum+=500;break;
        case 'M':
            returnNum+=1000;break;
    }
    return returnNum;
}