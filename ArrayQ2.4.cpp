#include <bits/stdc++.h>
using namespace std;
void findMajority(int arr[],int size)
{
	map<int, int> m;
	int count=1;
	map<int,int>::iterator it;
	for (int i = 0; i < size; ++i)
	{
		it = m.find(arr[i]);
		if (it->first==arr[i])
		{
			m[arr[i]]++;
			if(m[arr[i]]>size/2)
			{
				cout<<"\n Majority"<<arr[i];
                return ;
                
			}
		}
	
		else{
			m.insert(pair <int,int> (arr[i],count));
		}
		
	}
	cout<<"no majority element found";
}
int main()
{
	int a[5]= {1,1,2,3,1};
	findMajority(a,5);
	return 0;
	
}
