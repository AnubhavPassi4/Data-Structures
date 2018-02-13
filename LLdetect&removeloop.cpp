#include <bits\stdc++.h>
using namespace std;
struct Node
{
	int key;
	struct Node* next;
};
Node *newNode(int key)
{
    Node *temp = new Node;
    temp->key = key;
    temp->next = NULL;
    return temp;
}
 
void printList(Node *head)
{
    while (head != NULL)
    {
        cout << head->key << " ";
        head = head->next;
    }
    cout << endl;
}
void detectandRemoveloop(struct Node* head)
{ 
 Node* slow = head;
 Node* fast = head;
 slow = slow->next;
    fast = fast->next->next;
while(fast!=NULL && fast->next!=NULL)
{
	if (fast==slow)
	{
		break;
	}
	fast=fast->next->next;
	slow=slow->next;
}
if (fast==slow)
{
    slow=head;
}
while(slow->next!=fast->next){
	slow=slow->next;
	fast=fast->next;

}
	fast->next=NULL;

}int main()
{
    Node *head = newNode(50);
    head->next = head;
    head->next = newNode(20);
    head->next->next = newNode(15);
    head->next->next->next = newNode(4);
    head->next->next->next->next = newNode(10);
    head->next->next->next->next->next = head->next->next;
 
    detectandRemoveloop(head);
 
    cout<<"Linked List after removing loop \n";
    printList(head);
 
    return 0;
}
