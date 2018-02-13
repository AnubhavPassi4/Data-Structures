#include <bits\stdc++.h>
using namespace std;
int MaxSum(int arr[],int size){
	int currentMax=arr[0];
	int Maxsofar=arr[0];
	for (int i = 1; i < size; ++i)
	{
		currentMax=max(arr[i],currentMax+arr[i]);
		Maxsofar=max(Maxsofar,currentMax);

	}
	return Maxsofar;
}
int max(int a,int b)
{
	return (a>b) ? a:b;
}
int main()
{
	int a[7]={-1,-2,4,-2,-1,3,5};
	int n=sizeof(a)/sizeof(int);
   int m=	MaxSum(a,n);
   cout<<m;
	return 0;
}
