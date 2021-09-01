#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

int sax(int a ,int b)
{
	if (a>b) return a;
	else return b; 
}

main()
{
	int n;
	int arr[100],left[100],i,profit=0,right[100];
	int max=-1,maxidx=-1,maxofmaxarr=0,profit1=0,profit2=0,minsofar=10000,rainwater=0;
cin>>n;
for(i=0;i<n;i++)
	{cin>>arr[i];}
	
	left[0]=arr[0];
	for(i=1;i<n;i++)
	{
		left[i]=sax(left[i-1],arr[i]);
	}
	right[n-1]=arr[n-1];
	for(i=n-2;i>=0;i--)
	{
		right[i]=sax(right[i+1],arr[i]);
	}
	for(i=0;i<n;i++)
	{
		rainwater+=(min(left[i],right[i])-arr[i]);
	}
	cout<<rainwater<<endl;
	

return 0;
}

