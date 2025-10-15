#include<iostream>
using namespace std;
class rectangle{
	private:
		int length;
		int width;
	public:
		//constructor to initialize length and width
		rectangle(int l,int w){
			length = l;
			width = w;
		}
		//declare friend function
		friend int calculateArea(rectangle r);
};
//friend function definition
int calculateArea(rectangle r){
	//Accesing private members of class rectangle
	return r.length*r.width;
}
int main(){
	rectangle rect(10,5);
	//create object with length 10 and width 5
	//call friend function
	int area = calculateArea(rect);
	cout<<"Area of rectangle="<<area<<endl;
	return 0;
}
