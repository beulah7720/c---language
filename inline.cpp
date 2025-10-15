#include<iostream>
using namespace std;
//inline fuctoin to add two integers
inline int add(int a, int b){
	return a+b;
}
//over loaded inline fuction to add two doubles
inline double add(double a, double b) {
	return a+b;
}
//over loaded inline fuction to add three integers
inline int add(int a,int b,int c){
	return a+b+c;
} 
int main(){
	cout << "add(3.5,2.8)=" << add(3.5,2.8) << endl;
	cout << "add(4,7,8)=" << add(4,7,8) << endl;
	//calls int add (int, int, int)
	return 0;
}
