#include <bits/stdc++.h>

using namespace std;

int trailingZeroes(int n)
{int t=5,noofZero=0;
	while((n/t)>0)
	{
		noofZero+=(n/t);
		t=t*5;
	}
	return noofZero;
}

main()
{int n;
	cout<<" Enter number ";
	cin>>n;
	cout<<"\n trailing zeroes are "<<trailingZeroes(n);
}
