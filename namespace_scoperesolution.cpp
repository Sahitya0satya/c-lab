//Inplementation of scope resolution and namespace demo
#include<iostream>
using namespace std;
int x=10; //global variable
namespace Demo{
	int x=20;
}
main(){
	int x=100;
	cout<<"Scope variable value x : "<<x<<endl;
	cout<<"Global variable value x : "<<::x<<endl;
	cout<<"Namespace variable value x : "<<Demo::x;
	
}
