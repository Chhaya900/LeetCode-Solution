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
    ListNode* mergeNodes(ListNode* head) {
    ListNode * stop=head;
        ListNode * farward=head->next;
        while(farward !=NULL)
        {
            if(farward->val !=0)
            {
                stop->val=stop->val + farward->val;
            }
            else
            {
                if(farward->next ==NULL)
                {
                   stop->next=NULL; 
                }
                else
                {
              stop->next =farward;
                }
                stop = farward;
            }
            farward=farward->next;
        }
        
        return head;
    }
};