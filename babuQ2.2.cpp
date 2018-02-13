#include <bits/stdc++.h>
using namespace std;
struct A
{
	int element;
	int count;
	struct A* left;
	struct A* right;
};
struct A* newElement(int data ){
	struct A* a = new A();
	a->element= data;
	a->count=1;
	a->left=NULL;
	a->right=NULL;
	return a;
}
struct A* createBstToDetect(struct A* root,int data,int n)
{  int size = n;

	cout <<"m1\n";
	if (root==NULL)
	{
		cout <<"m4\n";
		struct A* root = newElement(data);
		return root;
	}
	cout <<"m6\n";
	
	if (root->element>data)
	{
		cout <<"m3\n";
		createBstToDetect(root->left,data,size);
	}
	if (root->element<data)
	{
		createBstToDetect(root->right,data,size);
	}
	if (root->element==data)
	{
		cout <<"m4\n";
		root->count++;
		if (root->count>n/2)
		{
			cout <<"m2\n";
			return NULL;
		}
	}
	return root;
}
int main()
{
	int n,arr[100];
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}

	struct A* root=NULL;
	for (int i = 0; i < n; ++i)
	{
		 root = createBstToDetect( root,arr[i],n);
		if (root==NULL)
	{
		cout<<"majority"<<i+1;
		break;
	}	
	}
	/*if (root==NULL)
	{
		cout<<"majority";
	}*/
	return 0;
}

