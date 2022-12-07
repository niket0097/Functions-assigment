#include<iostream>

using namespace std;

int fact(int a)
{
	
	int i=1;
	while(a>0)
	{
		i*=a;
		a--;
	}
	return i;
}

int ncr(int n, int r)
{
	return fact(n)/(fact(r)*fact(n-r));
	
}

int npr(int n, int r)
{
	
	return fact(n)/fact(n-r);
}



int main()
{
	int n,r;
	
	cout<<"Enter the value of n & r for calculating nCr & nPr (r should be less than n)";
	cin>>n>>r;
	
	cout<<"nCr is equal to "<<ncr(n,r);
	cout<<"\nnPr is equal to "<<npr(n,r);
	
	return 0;
	
}
