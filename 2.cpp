//
// Created by cruisin on 2021/6/9.
//
/*
 * 给你两个 非空 的链表，表示两个非负的整数。
 * 它们每位数字都是按照 逆序 的方式存储的，并且每个节点只能存储 一位 数字。
 * 请你将两个数相加，并以相同形式返回一个表示和的链表。
 * 你可以假设除了数字 0 之外，这两个数都不会以 0 开头。
 * 来源：力扣（LeetCode）
 * 链接：https://leetcode-cn.com/problems/add-two-numbers
 * 著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
 */
#include "allMyNeed.h"
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
{
    ListNode *result=new ListNode();
    ListNode *index=result;
    if (l1->val==0)
        result=l2;
    else if(l2->val==0)
        result=l1;
    else{
        while (l1!= nullptr&&l2!= nullptr)
        {
            index->val=l1->val+l2->val;
        }
    }


}