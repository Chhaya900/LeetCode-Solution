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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int sum=0, carry=0 , digit;
     ListNode * dummy=new ListNode (0);
        ListNode * dummy1=dummy;
        ListNode * first =l1;
        ListNode * second = l2;
        while(first !=NULL && second !=NULL)
        {
            sum = first->val+ second->val + carry;
            carry = sum/10;
            digit=sum%10;
            ListNode * newnode = new ListNode(digit);
            dummy1->next = newnode;
            dummy1=dummy1->next;
            first=first->next;
            second=second->next;
        }
     while(first!=NULL)
     {
         sum = first->val + carry;
            carry = sum/10;
            digit=sum%10;
            ListNode * newnode = new ListNode(digit);
            dummy1->next = newnode;
            dummy1=dummy1->next;
            first=first->next;
            
     }
         while(second!=NULL )
     {
         sum = second->val + carry;
            carry = sum/10;
            digit=sum%10;
            ListNode * newnode = new ListNode(digit);
            dummy1->next = newnode;
            dummy1=dummy1->next;
          second =second->next;
             }
        if (carry!=0)
        {
            ListNode * newnode = new ListNode(carry); 
            dummy1->next=newnode;
        }
       
        return dummy->next;
    }
};