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
    int getDecimalValue(ListNode* head) {
        if(head == NULL){
            return 0;
        }
        int n =0;
        ListNode *temp = head;
        while(temp != NULL){
            n++;
            temp = temp->next;

        }
        int res = 0;
        temp = head;
        while(temp){
            res = res += (temp->val)*pow(2,n-1);
            n--;
            temp = temp->next;
        }
        return res;
    }
};