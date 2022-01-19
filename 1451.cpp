//
// Created by cruisin on 2022/1/19.
//
//
//请你重新排列 text 中的单词，使所有单词按其长度的升序排列。如果两个单词的长度相同，则保留其在原句子中的相对顺序。
//类似于map方式，长度作为key，然后把所有是该长度下的word全部组合到一起，最后遍历这个map即可
#include "allMyNeed.h"
using namespace std;
string arrangeWords(string text) {
    int maxlen = 0;
    int cnt = 0;
    text[0] += 32;
    for(int i = 0; i < text.size(); i++)
    {
        if(text[i] == ' ')
        {
            maxlen = max(maxlen, cnt);
            cnt = 0;
        }
        else
            cnt++;
    }
    maxlen = max(maxlen, cnt);
    vector<string> arr(maxlen+1, "");
    cnt = 0;
    for(int i = 0; i < text.size(); i++)
    {
        if(text[i] == ' ')
        {
            arr[cnt] += text.substr(i-cnt, cnt) + " ";
            cnt = 0;
        }
        else
            cnt++;
    }
    arr[cnt] += text.substr(text.size()-cnt, cnt) + " ";
    string res = "";
    for(int i = 1; i <= maxlen; i++)
    {
        if(arr[i] != "")
            res += arr[i];
    }
    res[0] -= 32;
    return res.substr(0, res.size()-1);
}
