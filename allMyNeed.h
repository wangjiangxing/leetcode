//
// Created by cruisin on 2021/6/9.
//

#ifndef LEETCODE_ALLMYNEED_H
#define LEETCODE_ALLMYNEED_H
#include <malloc.h>
#include <iostream>
#include <string>
#include <vector>
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
#endif //LEETCODE_ALLMYNEED_H
