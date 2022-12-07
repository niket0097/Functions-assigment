#include<iostream>

using namespace std;

int addition(int ll, int ul)
{
	int i, sum=0;
	for(i=ll;i<=ul;i++)
	{
		if(i%3!=0&&i%5!=0)
		 sum+=i;
		 
	}
	return sum;
}

int main()
{
	int ll, ul;
	
	cout<<"Enter the lower limit & upper limit , to find the sum of numbers not divisible by 3 & 5 ";
	cin>>ll>>ul;
		
	cout<<"The sum is equal to "<<addition(ll,ul);
	return 0;
	
	
}
