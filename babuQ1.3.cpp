#include <bits/stdc++.h>
#define Max 10000
using namespace std;
void printPair(int arr[],int arr_size,int X){
	int temp;
	bool binMap[Max]={0};
	for (int i = 0; i < arr_size; ++i)
	{
		temp=X-arr[i];
		if (temp>=0 && binMap[temp]==1)
		{
			cout<<"pair is"<<temp<<"\t"<<arr[i];
		}
		binMap[arr[i]]=1;

	}
}
int main(){
	int A[] = {1, 4, 45, 6, 8, 10};
	int X = 16;
	int n=sizeof(A)/sizeof(A[0]);
	printPair(A,n,X);
	return 0;
}
