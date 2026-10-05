//#include<iostream>
//using namespace std;
//class Counter{
//	int count;
//	public:
//		Counter() {
//			count = 10;
//		}
//		void operator++(){
//			count++;
//		}
//		void display(){
//			cout<<"Value = "<<count<<endl;
//		}
//};
//int main(){
//	Counter c;
//	c.display();
//	++c;
//	c.display();
//}

#include<iostream>
using namespace std;
class Counter{
	public:
		int count;
		Counter(){
			count = 15;
		}
		void operator ++(){
			count++;
		}
		void display(){
			cout<<"Value of count is: "<<count<<endl;
		}
};
main(){
	Counter c;
	c.display();
	++c;
	cout<<"After incrementing:"<<endl;
	c.display();
}
