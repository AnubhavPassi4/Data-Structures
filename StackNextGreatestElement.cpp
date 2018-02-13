#include <bits\stdc++.h>
using namespace std;
void NextGreatestElement(int arr[],int size){
  int element,next;
  stack<int> s;
  s.push(arr[0]);
  for (int i = 1; i < size; ++i)
  {
  	next=arr[i];
  	if (s.empty()==false)
  	{
  		element=s.top();
  		s.pop();
  		while(element<next){
           cout<<element<<"-->"<<next<<"\n";
           if (s.empty()==true)
           {
           	break;
           }
           element=s.top();
           s.pop();
  		}
  		if (element>next)
  		{
  			s.push(element);
  		}
  	}
  	s.push(next);
  }
  while(s.empty()==false){
  	 element=s.top();
           s.pop();
  	cout<<element<<"-->"<<"-1"<<"\n";
  }
}
int main()
{
	int a[]={4,5,2,25};
	int n= sizeof(a)/sizeof(int);
	NextGreatestElement(a,n);
	return 0;

}