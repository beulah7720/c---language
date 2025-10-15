#include<iostream>
using namespace std;
int main()
{
	int n;
	cout <<"enter array size";
	cin>>n;
	int a[n];
	cout <<"enter elements";
	int i;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int sum=0;
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	cout<<"sum is"<<sum<<endl;
}
