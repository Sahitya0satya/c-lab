#include<iostream>
using namespace std;
class Complex{
	public:
	int real;
	int imag;
	public:
		Complex(int r = 0, int i = 0){
			real = r;
			imag = i;
		}
		Complex operator + (Complex c){
			Complex temp;
			temp.real = real + c.real;
			temp.imag = imag + c.imag;
			return temp;
		}
};
int main(){
	Complex c1(3,4);
	Complex c2(5,6);
	Complex c3;
	
	c3 = c1 + c2;
	cout<<"First Complex Number = "<<c1.real<< " + " << c1.imag << "i" << endl;
	cout<<"Second Complex Number = "<<c2.real<< " + " << c2.imag << "i" << endl;
	cout<<"Addition = "<<c3.real<< " + " << c3.imag << "i";
}
