// 2pointers move at diffrent speeds and if there is a loop in linked list they are xpected to meet somewhere
bool doesLInkedListHasLoop(node *head)
{
  node * slowptr=head,*fastptr=head;
  while(slowptr&&fastptr&&fastptr->next)
    
  {
    slowptr=slowptr->next;
    fastptr=fastptr->next->next;
    if(slowptr==fastptr)
      return true;          //there is a loop in linked list
  }
  return false;             //there is no loop in linked list
  
}
