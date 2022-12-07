#include<iostream>

using namespace std;


int fact(int n)
{
	int f=1;
	while(n>0)
	{
		f*=n;
		n--;		
	}
	
	return f;
	
}
int main()
{
	int n;
	
	cout<<"Enter number to find its factorial ";
	cin>>n;	
	cout<<"\nFactorial of the number is "<<fact(n);
	
	return 0;
	
}
