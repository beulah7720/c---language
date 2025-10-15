#include<iostream>
using namespace std;
class Demo {
	public:
		Demo() {
			cout <<"Constructor called: object created."<< endl;
		}
		~Demo() {
			cout <<"Destructor called: object destroyed."<<endl;
		}
};
int main()
{
	Demo obj;
	cout<<"inside main function"<< endl;
	return 0;
}
