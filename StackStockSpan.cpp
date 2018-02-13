#include <bits\stdc++.h>
using namespace std;
void stockSpan(int prize[],int S[],int size){
	stack<int> s;
	S[0]=1;
	s.push(0);
	for (int i = 1; i < size; ++i)
	{
		while((s.empty() == false) && prize[s.top()]<=prize[i]){
			s.pop();
		}
		if (s.empty()==true)
		{
			S[i]=i+1;
		}else{
			S[i]=i-s.top();
		}
		s.push(i);
	}
}
int main(){
	int prize[]={1,2,3,6,5};
	int size=sizeof(prize)/sizeof(int);
	int S[size];
	stockSpan(prize,S,size);
	for (int i = 0; i < size; ++i)
	{
		cout<<S[i];
	}
}
