#include<bits/stdc++.h>
using namespace std;


int main(){
	int arr[100],X,n,l,r,sum;
	cin>>n>>X;
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
sort(arr,arr+n);
l=0;
r=n-1;
while(l<r){
sum=arr[l]+arr[r];
if (sum==X)
{
	cout<<"match";
}
if (sum>X)
{
	r--;
}
else{
	l++;
}
}
}
