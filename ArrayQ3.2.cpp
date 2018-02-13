#include <bits/stdc++.h>
using namespace std;
 void findoddElement(int arr[],int size)
 {
 	map<int, int> m;
    map<int, int>::iterator it;

    for (int i = 0; i < size; ++i)
    {
    	it= m.find(arr[i]);
    	if (it->first==arr[i])
    	{    
    	    //cout<<"\na"<<count;
             m[arr[i]]++;
    	}else{
    		 //cout<<"\nb"<<count;
     		m[arr[i]]=1;
          // m.insert(pair <int,int> (arr[i],1));

    	}

    }
    for (it=m.begin(); it!=m.end(); ++it)
    {
    	if (it->second%2 != 0)
    	{
    		cout<<it->first;
    //	cout<<"\n"<<it->second;
    	}
    }
 }
 int main()
 {
 	int arr[7]={1,1,2,2,3,3,1};
 	findoddElement(arr,7);
 	return 0;
 }
