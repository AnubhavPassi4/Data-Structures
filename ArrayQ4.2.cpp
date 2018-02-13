#include<bits/stdc++.h>
using namespace std;
void ReverseArray(int start,int end,int arr[]){
int temp;
if(start>end)
{
	return;
}
temp=arr[start];
arr[start]=arr[end];
arr[end]=temp;
ReverseArray( start+1, end-1, arr);

}
int main(){
	int arr[5]={1,2,3,4,5};
	ReverseArray(0,4,arr);
	for (int i = 0; i < 5; ++i)
	{
		cout<<arr[i];
	}
}
