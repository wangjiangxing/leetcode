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
    if (l1->val==0&&l1->next==nullptr)
        result=l2;
    else if(l2->val==0&&l2->next==nullptr)
        result=l1;
    else{
        while (l1->next!= nullptr&&l2->next!= nullptr)
        {
            index->val=l1->val+l2->val;
            ListNode *tmp=new ListNode();
            index->next=tmp;
            index=index->next;
            l1=l1->next;
            l2=l2->next;
        }
        index->val=l1->val+l2->val;
        if (l1->next== nullptr&&l2->next!=nullptr)
            index->next=l2->next;
        else if((l2->next== nullptr&&l1->next!=nullptr))
            index->next=l1->next;
        index=result;
        bool isAdd= false;
        while (index->next!= nullptr)
        {
            if (isAdd)
            {
                index->val++;
                isAdd= false;
            }
            if (index->val>=10)
            {
                isAdd= true;
                index->val%=10;
                index=index->next;
            }
            else
                index=index->next;
        }
        if(isAdd)
            index->val++;
        if (index!=nullptr&&index->next==nullptr&&index->val>=10)
        {
            index->val%=10;
            ListNode *tmp=new ListNode();
            index->next=tmp;
            index=index->next;
            index->val=1;
        }
    }
    return result;

}
