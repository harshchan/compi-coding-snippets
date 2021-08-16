#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;



main()
{
int A[]={0,1,2,0,1,2,1,1,0};
int low=0,mid=0,high=8;
while(mid<=high)
{
	if(A[mid]==0){swap(A[mid],A[low]);
	low++;mid++;}
	if(A[mid]==2){swap(A[mid],A[high]);
	high--;}
	if(A[mid]==1)mid++;
	
}
for(int i=0;i<9;i++)
{
	cout<<A[i]<<"  ";
}
return 0;
}


