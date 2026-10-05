//Quadractic equation
#include<iostream>
#include<cmath>
using namespace std;
main(){
	int a,b,c,d,r1,r2;
	cout<<"Enter a,b,c values:";
	cin>>a>>b>>c;
	d=b*b-4*a*c;
	if(d>0){
		r1 = -b+sqrt(d)/(2*a);
		r2 = -b-sqrt(d)/(2*a);
		cout<<"Roots are real"<<endl;
		cout<<"Root 1 :"<<r1<<endl;
		cout<<"Root 2 :"<<r2;
	}
	else if(d==0){
		r1=-b/(2*a);
		cout<<"Roots are equal"<<endl;
		cout<<"Root 1 :"<<r1<<endl;
	}
	else{
		cout<<"Roots are imaginary"<<endl;
		cout<<"Root 1 :"<<r1<<endl;
		cout<<"Root 2 :"<<r2;
	}
}
