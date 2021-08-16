#include<iostream>
#include<conio.h>
#include<stdlib.h>


using namespace std;

struct minmax
{
	int minimum;
	int maximum;
};

struct minmax findminmax (int A[],int size)
{
	struct minmax M;
	//cout<<A[0]<<" "<<A[1]<<" "<<A[2]<<" "<<A[5];
	//cout<<"inside fn0"<<endl;
	int i;
	//int size=sizeof(A)/sizeof(A[0]);
	 //int size = *(&A + 1) - A;
	//cout<<sizeof(A)<<endl;
	//cout<<sizeof(A[0])<<endl;
	cout<<size<<endl;
	if(size %2 ==0)
	{
		if(A[0]>A[1])
		{
			M.minimum=A[1];
			M.maximum=A[0];
		}
		else
		{
			M.minimum=A[0];
			M.maximum=A[1];
		}
		i=2;
	}
	else
	{
		M.minimum=A[0];
		M.maximum=A[0];
		i=1;
	}
	while(i<size-1)
	{
		if(A[i]>A[i+1])
		{
			if(A[i]>M.maximum)
				M.maximum=A[i];
			if(A[i+1]<M.minimum)
				M.minimum=A[i+1];
		}
		else
		{
				if(A[i+1]>M.maximum)
				M.maximum=A[i+1];
			if(A[i]<M.minimum)
				M.minimum=A[i];
		}
		i+=2;
	}
	return M;
}

main()
{int x=-1,i=0;
int A[] = { 1000, 11, 445,
                1, 330, 3000 };
                

int size=sizeof(A)/sizeof(A[0]);

struct minmax MC=findminmax(A,size);
cout<<"\n"<<MC.maximum<<" \n"<<MC.minimum;
return 0;
}


