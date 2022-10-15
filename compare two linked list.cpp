 int count(SinglyLinkedListNode* head)
 {
      SinglyLinkedListNode* temp;
      temp=head;
      int a=0,i=0;
      while(temp!=NULL)
      {
          i++;
          temp=temp->next;
      }
      return i;
 }
 
 
bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
int l1=count(head1);
int l2=count(head2);
int j=0;
if(l1!=l2)
{
    return a;
}
else {
    SinglyLinkedListNode* temp1;
    SinglyLinkedListNode* temp2;
    temp1=head1;
    temp2=head2;
    while(temp1!=NULL)
    {
        if(temp1->data==temp2->data)
        j++;
        
        temp1=temp1->next;
        temp2=temp2->next;
    }
}
if(j==l1==l2)
a=1;

return a;
}
