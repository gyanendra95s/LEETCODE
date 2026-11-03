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
    ListNode* oddEvenList(ListNode* head) {
        ListNode* temp=head;
        ListNode* odd=new ListNode(NULL);
        ListNode* oddd=odd;

        ListNode* even=new ListNode(NULL);
        ListNode* evenn=even;
        int count=1;
        while(temp!=NULL){
            if((count%2)!=0){
                oddd->next=temp;
                oddd=oddd->next;
            }
            else{
                evenn->next=temp;
                evenn=evenn->next;
            }
            temp=temp->next;
            count++;
        }
        evenn->next=NULL;
        oddd->next=even->next;

        return odd->next;
    }
};