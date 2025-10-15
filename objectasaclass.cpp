#include<iostream>
using namespace std;
class B
{
	public:
		int x;
		B()
		{
			x=20;
			cout<<"\n In B constructor";
		}
};
class C
{
public:
	int y;
	B b;
	C()
	{
		cout<<"\n In C constructor";
	}
void show()
{
	cout<<"\nX="<<b.x<<"\tY="<<y;
}
};
int main()
{
	C c;
	c.show();
	return 0;
}
	
