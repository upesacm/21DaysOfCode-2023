#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	string S;
    cout<<"enter the string"<<endl;
    cin>>S;
	string P = S;
    reverse(P.begin(), P.end());
    if (S == P)
	{
		cout<<"Yes"<<endl;
	}
	else
	{
		cout<<"No"<<endl;
	}
	return 0;
}
