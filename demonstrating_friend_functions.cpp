//demonstrating friend functions
#include<iostream>
using namespace std;
class Student{
	protected:
		string name;
		friend void display(string name,Student);
};
void display(string n,Student s){
	s.name = n;
	cout<<"Student name : "<<n;
}
main(){
	Student s;
	display("Mahi",s);
}
