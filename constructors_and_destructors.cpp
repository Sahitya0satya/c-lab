#include<iostream>
using namespace std;
class Book{
	int bid;
	string bname;
	public:
		Book(){
			cout<<"Default"<<endl;
		}
		Book(int id, string name){
			int bid = id;
			string bname = name;
			cout<<"Book id: "<<bid<<endl<<"Book name: "<<bname<<endl;
		}
		Book(Book &b){
			bid = b.bid;
			bname = b.bname;
			cout<<"Book id: "<<bid<<endl<<"Book name: "<<bname<<endl;
		}
		
};
main(){
	Book b;
	Book b1(111,"CPP");
	Book b2(b1);
}
