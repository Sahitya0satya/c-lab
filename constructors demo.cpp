#include<iostream>
using namespace std;
class Demo{
	public:
		int x;
		Demo(){
			cout<<"Default constructor"<<endl;
		}
		Demo(int a){
			x = a;
			cout<<"Parameterized constructor"<<endl;
		}
		Demo(Demo &d){
			x = x.d;
			cout<<"Copy constructor"<<endl;
		}
		Demo(Demo &&d){
			x = d.x;
			d.x = 0;//reset constructor
			cout<<"Move constructor"<<endl;
		}
};
int main(){
	Demo d;//default constructor
	Demo d1(10);//parameterized constructor
	Demo d2(d1);//copy constructor
	Demo d3(move(d1));//move constructor
	cout<<"Parameterized constructor : "<<d1.x<<endl;
	cout<<"Copy constructor : "<<d2.x<<endl;
	cout<<"Move constructor : "<<d3.x<<endl;
}
