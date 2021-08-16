#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<queue>
using namespace std;
int large(int arr[],int k)
{
	priority_queue<int,vector<int>,greater<int> >min_heap;
	
	for(int i=0;i<7;i++)
	{
		min_heap.push(arr[i]);
		if(min_heap.size()>k)
		{
			min_heap.pop();
		}
	}
	return min_heap.top();
}


main()
{
int arr[]={1,7,6,10,20,80,3};
int k=3;
cout<<"The 3 rd largest element is "<<large(arr,k);
return 0;
}


