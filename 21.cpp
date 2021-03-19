//
// Created by cruisin on 2021/3/19.
//
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1==nullptr)
            return l2;
        else if(l2==nullptr)
            return l1;
        ListNode *ptr1=l1;
        ListNode *ptr2=l2;
        ListNode *retListNode=new ListNode();
        ListNode *retListNode2=retListNode;
        while((ptr1!=nullptr)&&(ptr2!=nullptr))
        {
            if(ptr1->val<ptr2->val){
                retListNode2->next=ptr1;
                retListNode2=retListNode2->next;
                ptr1=ptr1->next;
            }
            else{
                retListNode2->next=ptr2;
                retListNode2=retListNode2->next;
                ptr2=ptr2->next;
            }

        }
        if(ptr1==nullptr)
            retListNode2->next=ptr2;
        else if(ptr2==nullptr)
            retListNode2->next=ptr1;
        retListNode=retListNode->next;
        return retListNode;

    }
};

