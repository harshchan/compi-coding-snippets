#include <bits/stdc++.h>

using namespace std;



int findGCD(int a,int b)
{
	if(b==0)return a;
	else
	findGCD(b,a%b);
}

main()
{int a,b;
cout<<"\n Enter two numbers";
cin>>a>>b;
cout<<"\n GCD is  "<<findGCD(a,b);
}
