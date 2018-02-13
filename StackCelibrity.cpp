#include <bits\stdc++.h>
using namespace std;
#define N 8

bool  MATRIX[N][N] = {{0, 0, 1, 0},
                      {0, 0, 1, 0},
                      {0, 0, 0, 0},
                      {0, 0, 1, 0}};
 
bool knows(int a, int b)
{
    return MATRIX[a][b];
}
int findCelebrity(int size){
	stack<int> s;
	for (int i = size-1; i >=0 ; i--)
	{
		s.push(i);
	}
	while(s.size()>1){
       int a=s.top();
       s.pop();
        int b=s.top();
       s.pop();
       if (knows(a,b))
       {
       	s.push(b);
       }else{
       	s.push(a);
       }

	}
	return s.top();
}
int main()
{
    int n = 4;
    int id = findCelebrity(n);
    cout<<id;
    return 0;
    }