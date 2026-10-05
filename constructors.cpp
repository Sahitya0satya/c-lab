#include<iostream>
using namespace std;
class Test{
	public:
		Test(){
			cout<<"Constructor"<<endl;
		}
		~Test(){
			cout<<"It is a Destructor";
		}
};
main(){
	Test t;
}
