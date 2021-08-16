#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include <bits/stdc++.h>
// #include<unordered_set>
using namespace std;


	

main()
{
set <int> S;
	vector<int> Inter;
int A[]={1, 2, 3, 4, 5};
int B[]={1,2,3,6,7};
int siz=S.size();
int i;
for(i=0;i<5;i++)
{
	S.insert(A[i]);
	if(siz==S.size())
	{
		Inter.push_back(A[i]);
	}
	else 
	siz=S.size();
}

for(i=0;i<5;i++)
{
	S.insert(B[i]);
	if(siz==S.size())
	{
		Inter.push_back(B[i]);
	}
	else 
	siz=S.size();
}

cout<<S.size()<<"  "<<Inter.size();

return 0;
}


