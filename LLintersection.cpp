#include <bits\stdc++.h>
using namespace std;
struct Node
{
	int data;
	struct Node* next;
	
};
int getCount(struct Node* head){
	int count=0;
	if (head==NULL)
	{
		return 0;
	}
	while(head!=NULL)
	{   count++;
		head=head->next;
		
	}
	cout<<count<<"\n";
	return count;
}
int _getIntersection(struct Node* head1,struct Node* head2,int d)
{
	struct Node* current1=head1;
	struct Node* current2=head2;
    int D=d;
 for (int i = 0; i < D; ++i)
 {  if (current1==NULL)
   {
 	return -1;
   }

 	current1=current1->next;
 }
while(current1!=NULL && current2!=NULL)
{
	//cout<<11<<"\n";
	//cout<<current1->data<<current2->data;
	if (current1->data == current2->data)
	{
		
		return current1->data;
		
	}
 	current1=current1->next;
 	current2=current2->next;

}
}
int getIntersection(struct Node* head1,struct Node* head2)
{   int d;
	int c1 = getCount(head1);
	int c2 = getCount(head2);
	if (c1>c2)
	{
		d = c1-c2;
		cout<<d<<"\n";
	
		return _getIntersection(head1,head2,d);
	}
	if (c1<c2)
	{   
		d=c2-c1;
	
		return _getIntersection(head2,head1,d);
	}
}

void push(struct Node** head,int data)
{ 
Node* node = new Node();
node->data=data;
node->next=*head;
*head=node;
}
int main(){
	Node* head1=NULL;
    push(&head1,20);
    push(&head1,30);
    push(&head1,40);
    push(&head1,50);
    push(&head1,60);
    Node* head2=NULL;
    push(&head2,20);
    push(&head2,30);
    push(&head2,40);
    push(&head2,70);
    cout<<getIntersection(head1,head2);

return 0;
}
