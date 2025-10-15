#include<iostream>
#include<cmath>
using namespace std;
int main(){
	double a,b,c;
	double discriminant,root1,root2,realPart,imaginaryPart;
	cout<<"Enter coefficients a,b and c";
	cin>>a>>b>>c;
	discriminant = b*b-4*a*c;
	if(discriminant>0){
		root1 =(-b+sqrt(discriminant))/(2*a);
		root2 =(-b-sqrt(discriminant))/(2*a);
		cout<<"Roots are real and differnet."<<endl;
		cout<<"Roots1="<<root1<<endl;
		cout<<"Roots2="<<root2<<endl;
	}else if(discriminant == 0){
		root1=-b/(2*a);
		cout<<"Roots are real and equal."<<endl;
		cout<<"Roots 1 =" << realPart << "+" << endl;
		}else {
		realPart=-b/(2*a);
		cout<<"Roots are complex and imaginary."<<endl;
		cout << "Root 1 =" << realPart << "+" << imaginaryPart<<"i"<<endl;
        cout << "Root 2 =" << realPart << "-" << imaginaryPart<<"i"<<endl;
	}
	return 0;
}
