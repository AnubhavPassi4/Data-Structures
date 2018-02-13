#include <bits\stdc++.h>
using namespace std;
class Node{
	public: int data;
	Node* next;
	Node* random;
	Node(int data)
	{
		this->data=data;
		Node->next=NULL;
		Node->random=NULL;

	}
}
class linkedList{
	public: Node* head;
	linkedList(Node* head)
	{
		this->head=head;
	}
	void push(int data){
		Node* node=new Node(data);
		node->next=head;
		head=node;
	}
	void print(){
		Node* temp=head;
		while(temp!=NULL){
			Node* Random = temp->random;
			int randomData=(Random!=NULL) ?Random->data:0;
			cout<<temp->data<<"\t"<<randomData<<"\n";
			temp=temp->next;
		}
	}

linkedList* clone(Node* head){
           Node* orgNode=head;
           Node* cloneNode=NULL;
           map<Node*, Node*> m;
           while(orgNode!=NULL)
           {
           	cloneNode=new Node(orgNode->data);
           	m[orgNode]=cloneNode;
           	orgNode=orgNode->next;
           }
           orgNode=head;
           while(orgNode!=NULL){
           	cloneNode=m[orgNode];
           	cloneNode->next=m[orgNod->next];
           	cloneNode->random=m[orgNode->random];
           	orgNode=orgNode->next;
           }
       return new linkedList(m[head]);

}
}

int main()
{
    // Pushing data in the linked list.
    LinkedList *mylist = new LinkedList(new Node(5));
    mylist->push(4);
    mylist->push(3);
    mylist->push(2);
    mylist->push(1);
 
    // Setting up random references.
    mylist->head->random = mylist->head->next->next;
 
    mylist->head->next->random =
        mylist->head->next->next->next;
 
    mylist->head->next->next->random =
        mylist->head->next->next->next->next;
 
    mylist->head->next->next->next->random =
        mylist->head->next->next->next->next->next;
 
    mylist->head->next->next->next->next->random =
        mylist->head->next;
 
    // Making a clone of the original
    // linked list.
    LinkedList *clone = mylist->clone();
 
    // Print the original and cloned 
    // linked list.
    cout << "Original linked list\n";
    mylist->print();
    cout << "\nCloned linked list\n";
    clone->print();
}