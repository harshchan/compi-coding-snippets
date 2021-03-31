#include <bits/stdc++.h>

using namespace std;



void powerSet(string S,int i,string curr)
{
	if(i==S.length())
	{cout<<curr<< " , ";return;
	}
	powerSet(S,i+1,curr+S[i]);
	powerSet(S,i+1,curr);
}

main()
{string S;
cout<<"\n Enter String ";
cin>>S;
powerSet(S,0,"");
}
