#include<iostream>
using namespace std;
int main()
{
	int n,i=1,count=0;
	cout<<"enter number";
	cin>>n;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			count=count+1;
		}
	}
	if(count==0)
	cout <<n<<"is prime"<<endl;
	else
	cout <<n<<"is not prime"<<endl;
}
