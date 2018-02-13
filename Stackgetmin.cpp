#include <bits\stdc++.h>
using namespace std;
struct Mystack
{
	stack<int> s;
	int minEle;
	void  getMin(){
		if (s.empty()==true)
		{
			cout<<"\n empty stack";
		}
       cout<<"\n min element is  "<<minEle;
	}
	void peek(){
		int peek=s.top();
		if (s.empty()==true)
		{
			cout<<"\n empty stack";
		}
		if (peek>=minEle)
		{
			cout<<"\n"<<peek;
		}else{
              cout<<"\n"<<minEle;
		}
	}
	void pushEle( int element){
		int updateEle=2*element-minEle;
		if (s.empty()==true)
		{
			s.push(element);
			minEle=element;
		}
		if (element>=minEle)
		{
			s.push(element);
		}else{
			s.push(updateEle);
			minEle=element;
		}
	}
	void popEle(){
		int element;
		if (s.empty()==true)
		{
			cout<<"\n empty stack";
		}
		if (s.top()>=minEle)
		{
			s.pop();
		}else{ 
			element=s.top();
			minEle=2*minEle-element;
			s.pop();

		}

	}
	
};
int main()
{
    Mystack s;
    s.pushEle(3);
    s.pushEle(5);
    s.getMin();
    s.pushEle(2);
    s.pushEle(1);
    s.getMin();
    s.popEle();
    s.getMin();
    s.popEle();
    s.peek();
 
    return 0;
}
