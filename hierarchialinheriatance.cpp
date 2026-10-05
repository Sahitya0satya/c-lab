#include<iostream>
using namespace std;
class Parent{
	public:
		Parent(){
			cout<<"This is parent class"<<endl;
		}
};
class Child1 : virtual public Parent{
	public:
		Child1() : Parent(){
			cout<<"This is child1"<<endl;
		}
};
class Child2 : virtual public Parent{
	public:
		Child2() : Parent(){
			cout<<"This is child2"<<endl;
		}
};
class SmallChild : public Child1, public Child2{
	public:
		void display(){
			cout<<"This is small child"<<endl;
		}
};
main(){
	SmallChild sc;
	sc.display();
}
