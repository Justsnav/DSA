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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL)
            return list2;
        if(list2 == NULL)
            return list1;
        ListNode* dummy = new ListNode(0);
        ListNode *l1 = list1;
        ListNode *l2 = list2;
        ListNode *l3 = dummy;
        while(l1 && l2){
            if(l1->val < l2->val){
                l3->next = l1;
                l1 = l1->next;
            }else{
                l3->next = l2;
                l2 = l2->next;
            }
            l3 = l3->next;
        }
        l3->next = (l1 == NULL)? l2:l1;
        return dummy->next;
    }
};