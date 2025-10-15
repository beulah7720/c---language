#include<iostream>
using namespace std;
int main()
{
	int n,i;
	cout<<"enter number";
	cin>>n;
	int a=0,b=1;
	for(i=0;i<n;i++)
	{
		cout<< a <<" ";
		int next = a+b;
		a=b;
		b=next;
	}
	return 0;
}
