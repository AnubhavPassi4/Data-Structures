#include <bits\stdc++.h>
using namespace std;
struct Node
{ int data;
	struct Node* next;
	
};
void push(struct Node** HeadRef,int data)
{    
	Node* node = new Node();
	node->data=data;
	node->next= *HeadRef;
  	*HeadRef=node;
}
void printList(struct Node *head)
{ 
    struct Node *temp = head;
    
    while(temp != NULL)
    { 
        cout<<temp->data<<"\t";  
        temp = temp->next;  
    }
}    
struct Node* SubReverse(struct Node* head,int k)
{   struct Node* current= head;
   struct Node* next= NULL;
    struct Node* prev= NULL;
    int count=0;
    while(current!=NULL && count<k){
    	next=current->next;
    	current->next=prev;
    	prev=current;
    	current=next;
    	count++;
    }
    if (current!=NULL)
    {
       head->next=SubReverse(current,k);
    }
    return prev;
}
 int main(){
     struct Node* head=NULL;
    push(&head,1);
    push(&head,2);
    push(&head,3);
    push(&head,4);
    push(&head,5);
    push(&head,6);
    push(&head,7);
    push(&head,8);
    push(&head,9);

    printList(head);
    head=SubReverse(head,2);
    printList(head);

}

