#include<iostream>
using namespace std;
class Student {
	private:
		string name;
		int roll;
	public:
		// parameterized constructor 
		Student(string n, int r) {
			name = n;
			roll = r;
			cout << "parameterized constructor called." << endl;
		}
		Student(const Student & s){
			name = s.name;
			roll = s.roll;
			cout << "copy constructor called." << endl;
		}
		void display(){
		cout << "Name:" << name << ", Roll:" <<roll<< endl;
	}
};
int main(){
	Student s1("Angel",60); //Calls parameterized constructor 
	Student s2 = s1;   //calls copy constructor
	s1.display();
	s2.display();
	return 0;
}
