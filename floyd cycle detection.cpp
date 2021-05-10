// 2pointers move at diffrent speeds and if there is a loop in linked list they are xpected to meet somewhere
bool doesLinkedListHasLoop(node *head)
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
//to detect the start of  cycke
//initialise slowptr to head and fastptr will be at same position as the cycle
//the point at which they both meet again is the starting point of loop/cycle
//and now both slowptr and fastptr will move 1 space at a time

if(doesLinkedListHaveLoop(head))
{
  slowptr=head;
  while(slowptr!=fastptr)
  {
    fastptr=fastptr->next;
    slowptr=slowptr->next;
  }
  return slowptr;
}
