//Illustrating the default arguments and access specifiers 
#include<iostream>
using namespace std;
class Student{
	private:
		int marks;
	public:
		void setMarks(int m=50){
			marks=m;
		}
		void display(){
			cout<<"Marks : "<<marks;
		}
	protected:
		
};
main(){
	Student s1,s2;
	s1.setMarks();
	cout<<"Student 1 : "<<endl;
	s1.display();
	s2.setMarks(90);
	cout<<"\nStudent 2 :"<<endl;
	s2.display();
}
