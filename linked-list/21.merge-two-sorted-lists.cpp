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
class Solution 
{
public:
    void insertAtTail(ListNode* &head,ListNode* &tail,int data)
    {
        ListNode* temp = new ListNode(data);
        if(head == NULL)
        {
            head = temp;
            tail = temp;
            return;
        }
        else
        {
            tail -> next = temp;
            tail = temp;
        }
    }
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) 
    {
        ListNode *a = list1,*b = list2;
        ListNode* ansHead = NULL;
        ListNode* ansTail = NULL;
        while(a != NULL && b!= NULL)
        {
            if(a -> val <= b -> val)
            {
                insertAtTail(ansHead,ansTail,a -> val);
                a = a -> next;
            }
            else 
            {
                insertAtTail(ansHead,ansTail,b-> val);
                b = b -> next;
            }
        }
        while(a != NULL)
        {
            insertAtTail(ansHead,ansTail,a -> val);
            a = a -> next;
        }
        while(b != NULL)
        {
            insertAtTail(ansHead,ansTail,b-> val);
            b = b -> next;
        }
        return ansHead;
    }
};