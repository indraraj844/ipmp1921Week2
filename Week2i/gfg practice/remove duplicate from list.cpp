Node *removeDuplicates(Node *head)
{
 // your code goes here
 if(!head)
    return NULL;
    else
    {
    Node *curr=head,*temp1;
    while(curr->next)
    {  
        if(curr->data==curr->next->data)
        {
            temp1=curr->next;
            curr->next=temp1->next;
            free(temp1);
            
        }
        else
        curr=curr->next;
    }
    return head;
    }
}
https://practice.geeksforgeeks.org/problems/remove-duplicate-element-from-sorted-linked-list/1#
