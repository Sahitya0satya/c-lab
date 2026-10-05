#include<iostream>
using namespace std;
class Outer{
	public:
		class Inner{
			public:
				void display(){
					cout<<"Nested class"<<endl;
				}
		};
};
main(){
	Outer::Inner m;
	m.display();
}
