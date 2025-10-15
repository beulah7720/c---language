#include<iostream>
using namespace std;
class rectangle{
	private:
		int length;
		int width;
	public:
		//constructor to initialize length and width
		rectangle(int l,int w){
			length=l;
			width=w;
		}
	//declare friend function
	friend int calculatearea(rectangle r);
};
//friend fuction definition
int calculatearea(rectangle r){
	return r.length*r.width;
}
int main(){
	rectangle rect(15,4);//create object with length 15 and width 5
	//call friend function
	int area = calculatearea(rect);
	cout << "area of rectangle ="<<area << endl;
	return 0;
}
