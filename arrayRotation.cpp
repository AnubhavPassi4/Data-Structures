#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b);
void arrRot(int arr[],int d,int n){
	int j,k,temp;
	int b=gcd(d,n);
	for (int i = 0; i < b; ++i)
	{
        temp=arr[i];
        j=i;
        while(1){
        	k=j+d;
        	if (k>=n)
        	{
        		k=k-n;
        	}
        	if (k==i)
        	{
        		break;
        	}
        	arr[j]=arr[k];
        	j=k;
        }
        arr[j]=temp;
		
	}

}
int gcd(int a,int b)
{
   if(b==0)
     return a;
   else
     return gcd(b, a%b);
}
 
/*int gcd(int a,int b)
{
	if (b==0)
	{
		return a;
	}
	return gcd(b,a%b);
}*/
int main()
{
	int a[]={1,2,3,4,5};
	int n = sizeof(a)/sizeof(int);
	arrRot(a,2,n);
	for (int i = 0; i < n; ++i)
	{
		cout<<a[i];
	}
	return 0;
}
