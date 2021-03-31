#include <bits/stdc++.h>

using namespace std;




bool seiveOfErastothenes(int n)
{
	bool isprime[10000];
	 memset(isprime, true, sizeof(isprime));
	isprime[0]=false;
	isprime[1]=false;
	cout<<"\n Prime numbers in range 1 to "<<n<<endl;
	for(int i=2;i*i<=n;i++)
	{
		for(int j=2*i;j<=n;j+=i)
		{
			isprime[j]=false;
		}
	}
	
	for(int i=2;i<=n;i++)
	{
		if(isprime[i])
		cout<<i<<" ";
	}
	
	return isprime[n];
}
main()
{int n;
	cout<<" Enter number ";
	cin>>n;
	if(seiveOfErastothenes(n))
	cout<<"\n entered number is prime";
	else
	cout<<"\n number is not prime";
	
	}
