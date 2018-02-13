#include <bits/stdc++.h>
using namespace std;
 int findMajority(int a[],int n){
	int i=0;
	int size = n;
	int majority=i;
	int count=1;
	
	for (int i = 1; i < size; ++i)
	{
		if (a[majority]==a[i])
		{
			count++;
		}
		else{
			count--;
		}
		if (count==0)
		{
			a[majority]=a[i];
			count = 1;
		}
	}
	return a[majority];
}
void checkMajority(int a[],int n,int maj)
{
	int size=n;
	int count=0;
for (int i = 0; i < size; ++i)
{
	if (a[i]==a[maj])
	{
		count++;
	}
}
if(count>size/2)
{
	cout<<"majority"<<a[maj]<<"\n";
}else{
	cout<<"none is in majority";
}
}
int main(){
	int arr[100];
	int n;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	int m=findMajority(arr,n);
	checkMajority(arr,n,m);
}
