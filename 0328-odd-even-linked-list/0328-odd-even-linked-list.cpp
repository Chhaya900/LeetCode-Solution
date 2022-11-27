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
//        ListNode * odd=head;
//         ListNode * even = head->next;
//         ListNode * evenst=head->next;
//         if(head==NULL || head->next==NULL || head->next->next==NULL)
//         {
//             return head;
//         }
//         while ( even !=NULL && even->next!=NULL)
//         {
//             odd->next=even->next;
//             odd= odd->next;
//             even->next = odd->next;
           
//             even = even->next;
//         }
//         odd->next = evenst;
        
        
//     return head;
         if(head==NULL || head->next==NULL || head->next->next==NULL)
            return head;
        ListNode *odd=head,*even=head->next,*evenHold=head->next;
        while(even!=NULL && even->next!=NULL){
            odd->next=even->next;
            odd=odd->next;
            even->next=odd->next;
            even=even->next;
        }
        odd->next=evenHold;
        return head;
        
    }
};