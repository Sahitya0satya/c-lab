//nested class
#include<iostream>
using namespace std;
class Employee{
	public:
		class Salary{
			public:
				int s = 50000;
				void showSalary(){
					cout<<"Salary : "<<s;
				}
			};
};
main(){
	Employee::Salary m;
	m.showSalary();
}
