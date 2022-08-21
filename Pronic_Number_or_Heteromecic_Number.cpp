
#include<bits/stdc++.h>
using namespace std;


string pronic(int x)
{

	for (int i = 0;i <= (int)(sqrt(x));	i++)

	
		if (x == i * (i + 1))
		return "YES";

	return "NO";
}


int main()
{
	int num;
	cin>>num;
	cout<<pronic(num);
	
	
	return 0;
}


