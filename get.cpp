#include <iostream>
using namespace std;
class car{
 public:
 	  char name[20],model[20];
	  int number,year_of_production;
  public:
	int get(){
		cout <<"What is the name of your car? ";
		cin>>name;
		cout <<"What is the model of your car? ";
		cin>>model;
		cout <<"What year was your car produced? ";
		cin>>year_of_production;
	}
  public :
	void display(){
		cout <<"Your car is a "<<name<<endl<<"Its model is "
			<<model<<endl<<"It was produced "<<year_of_production<<endl;
		}
};
class bad :public car {
	public:
		 int cad(){
			cout <<name;
			cout<<endl<<model;
	}
};
int main (){
	bad c;
	car n;

	n.get();
	//n.display();
	c.cad();

	return 0;
}
