//Factorial of a given number using recursion
#include<iostream>
using namespace std;
int fact(int);//Function declaration
main(){
	int n;
	cout<<"Enter n value:";
	cin>>n;
	cout<<"Factorial of "<<n<<" is "<<fact(n);//Function calling
}
//Function definition
int fact(int num){
	if(num==0 || num==1){
		return 1;
	}
	else{
		return num * fact(num - 1);//Recursive function
	}
}
