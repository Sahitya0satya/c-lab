////single inheritance
////#include<iostream>
////using namespace std;
////class Parent{
////	public:
////		void parentMethod(){
////			cout<<"This is parent class"<<endl;
////		}
////};
////class Child: public Parent{
////	public:
////		void childMethod(){
////			cout<<"This is child class"<<endl;
////		}
////};
////int main(){
////	Child c;
////	c.childMethod();
////	c.parentMethod();
////}
//
//
////multiple inheritance
//#include<iostream>
//using namespace std;
//class Father{
//	public:
//		string address = "Viskahapatnam";
////		void fatherMethod(){
////			cout<<"This is father class"<<endl;
////		}
//};
//class Mother{
//	public:
//		string name = "Komala";
////		void motherMethod(){
////			cout<<"This is mother class";
////		}
//};
//class Child: public Father, public Mother{
//	public:
//		void childMethod(){
//			cout<<"Father address:"<<address<<endl;
//			cout<<"Mother name:"<<name<<endl;
////			cout<<"This is child class"<<endl;
//		}
//};
//int main(){
//	Child c;
//	c.childMethod();
////	c.fatherMethod();
////	c.motherMethod();
//}
//	
//
//
////#include<iostream>
////using namespace std;
////class Father{
////	public:
////		Father(int x){
////			cout<<"Value is:"<<x*2;
////		}
////};
////class Child: public Father{
////	public:
////		Child() : Father(4){
////	}
////};
////int main(){
////	Child c;
////}




//multilevel inheritance
//#include<iostream>
//using namespace std;
//class Grandfather
//{
//	public:
//		Grandfather()
//		{
//			cout<<"This is Grandfather"<<endl;
//		}
//};
//class Father : public Grandfather
//{
//	public:
//		Father()
//		{
//			cout<<"This is Father class"<<endl;	
//		}	
//};
//class Child : public Father
//{
//	public: 
//		Child()
//		{
//			cout<<"This is child class"<<endl;	
//		}	
//};
//main()
//{
//	Child c;
//	return 0;
//}



//hierarichal inheritance
//#include<iostream>
//using namespace std;
//class Parent
//{	
//	public:
//		Parent()
//		{
//			cout<<"Parent class"<<endl;
//		}
//};
//class Child1: public Parent
//{
//	public:
//		Child1()
//		{
//			cout<<"Child class 1"<<endl;
//		}
//};
//class Child2: public Parent
//{
//	public:
//		Child2()
//		{
//			cout<<"Child class 2"<<endl;
//		}
//};
//main()
//{
//	Child1 c1;
//	Child2 c2;
//}
//hybrid inhertance

#include<iostream>
using namespace std;
class Parent
{
	public:
		Parent(){
		cout<<"Parent Class"<<endl;
	}
};
class Child1 : public Parent
{
	public:
		Child1()
	cout<<"Child1's Class"<<endl;	
};
class Child2 : public Parent
{
	public:
	cout<<"Child2's Class"<<endl;
};
main()
{
		
}

