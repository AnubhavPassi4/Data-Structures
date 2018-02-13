#include <bits\stdc++.h>
using namespace std;
struct Node
{
	int data;
	struct Node* next;
};
void pushNode(struct Node** HeadRef,int data)
{    
	Node* node = new Node();
	node->data=data;
	node->next= *HeadRef;
  	*HeadRef=node;
}
void reversal(struct Node** HeadRef)
{
	struct Node* prev=NULL;
	struct Node* curr= *HeadRef;
	struct Node* next;
	while(curr!=NULL)
	{   
		next=curr->next;
		curr->next=prev;
		prev=curr;
		curr=next;
	}
	*HeadRef=prev;

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
int main()
{
	Node* head = NULL;

	pushNode(&head,20);
	pushNode(&head,30);
	pushNode(&head,2);
	pushNode(&head,40);
	printList(head);
	reversal(&head);
	printList(head);
     return 0;
}
