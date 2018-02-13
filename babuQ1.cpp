#include<iostream>
using namespace std;
int main()
{
int arr[100],X,n,sum;
cout<<"enter size and sum\n";
cin>>n>>X;
for(int i=0;i<n;i++){
	cin>>arr[i];
}
for (int i = 0; i < n; ++i)
{
	for (int j = i+1; j < n; j++)
	{
		sum=arr[i]+arr[j];
		if(sum==X){
			cout<<"\tmatched at\t"<<i<<j;
		}
	}
}
return 0;
}
