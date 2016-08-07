/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    
    ListNode* res = new ListNode(0);  //returns a memory address to ListNode with size = Bytes 
    ListNode* tptr = res; // res will keep track of head of the new list as we traverse both lists.
    
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
         while (true)
        
            {
                if(l1 == NULL)
                    { tptr->next = l2;
                      break;
                    }
                if (l2 == NULL)
                    { tptr->next = l1;
                     break; 
                    }                     
                if(l1==NULL && l2== NULL)
                    {
                        tptr->next = NULL;
                        break;
                    }
                if (l2->val < l1 ->val)
                    {
                      tptr->next = l2;
                      l2 = l2->next;
                    }
                else                
                    {
                        tptr->next = l1;
                        l1 = l1->next ;
                    }
                    
                  tptr = tptr->next;
                }        
           
     return res->next; 
    }
};