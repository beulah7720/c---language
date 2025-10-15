#include<iostream>
using namespace std;
class A{
	public:
	void displayA(){
		cout<<"Class A display()"<<endl;
	}
};
class B:virtual public A{
	public:
	void displayB()
	{
		cout<<"Class B display()"<<endl;
	}
};
class C:virtual public A{
	public:
	void displayC()
{
	cout<<"Class C display()"<<endl;
}
};
class D:virtual public B,virtual public C{
	public:
	void displayD()
	{
		cout<<"Class D display()"<<endl;
	}
};
int main()
{
	D d;
	d.displayA();
	d.displayB();
	d.displayC();
	d.displayD();
	return 0;
}
