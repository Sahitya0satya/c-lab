//using inline functions and overloading functions 
#include<iostream>
using namespace std;
inline int square(int n){
	return n*n;
}
int main(){
	int a;
	cin>>a;
	cout<<"Sqaure Root : "<<square(a);
}
