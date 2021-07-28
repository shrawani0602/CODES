#include<iostream>
using namespace std;
  
int fun(int n)
  {
  	int f=1;
  	if(n>0)
  	        {
			  f=n*fun(n-1);}
  	return f;
  }

int main()
  {
  	int x=5;
  	cout<<fun(x);
  return 0;	
  }
