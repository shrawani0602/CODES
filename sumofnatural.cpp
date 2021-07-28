#include<iostream>
using namespace std;

int sum(int n)
{   int s=0;
	if(n>0)
	{
		
		s=n+sum(n-1);
		
	}
	return s;
}

int main()
{
	int n=5;
	cout<<sum(n);
return 0;
}
