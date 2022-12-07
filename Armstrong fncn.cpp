#include<iostream>
#include<math.h>

using namespace std;

int armst(int n)
{
	
	int sum=0,d,p,c=0;
      p=n;
	
	while(n>0)
	{
		
		n=n/10; c++;
		
	}
	
	n=p;
	
	while(n>0)
	{
		d=n%10;
		n=n/10;
		sum+=pow(d,c);	
	}	
	
	return sum;
}

int main()
{
	int n;
	
	cout<<"Enter the number to check if it is armstrong number ";
	cin>>n;
	
	if(n==armst(n))
	  cout<<"Number is armstrong";
	else
	  cout<<"Number is not armstrong";
	
		
	return 0;
	
	
}
