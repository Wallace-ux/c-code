#include <iostream>
using namespace std;
class hello{
	public:
	   int order,entry[10],a,b,no,z[10],v;
	   char food[4][8]={{"Beans"},{"Ugali"},{"chicken"},{"chips"}};
	   char D[4][7]={{"coke"},{"fanta"},{"pepsi"},{"Orange"}};
   } ;

class fn:hello{
  public:
  	void greet(){
		for (int j=0 ;j<4;j++){
		cout <<j<<" = "<<food[j]<<endl;
		}
	cout <<endl;
		 for (int t=0;t<4;t++){
			cout <<t<<" = "<<D[t]<<endl;
		 }

	}

  };

	class sl:hello{
	public :
		int drink(){
	 cout <<"How many drinks do you want to order " ;
	 cin >>no;
	 cout <<"Select "<<no<<" drinks by no ";
	 for (int j=0;j<no;j++){
		cin>>z[j];
	 }
	 cout <<"You selected "<<endl;
	 for (int J=0;J<no;J++){
		cout<<"\t" <<D[z[J]]<<endl;
	 }
	}

	public : int meal(){
			cout<<"How many orders would you like to make ";
			cin >>order;
			cout <<"Sellect "<<order <<" items with their numbers ";
			for (int i=0;i<order;i++){
				cin>>entry[i];
				//cout <<entry[i];
				 }
			 cout <<"You selected "<<endl;
			 for (int I=0;I<order;I++){
				cout<<"\t" <<food[entry[I]]<<endl;
			 }
			 }
		 };

class T:hello{
public:
	int total(){

	for (int a=0;a<order;a++){
			b=entry[a];
			//cout <<entry[a]<<endl;

			/*v=z[a];
			cout <<"\t" <<D[v]<<" ";
			cout<<endl;
			cout <<"\t" <<food[b]<<" ";  */
	}
	}

   };
int main(){
	fn a;
	sl b;
	sl d;
	T c;
	int q;
	cout <<"****************** WLECOME TO OUR HOTEL *******************" <<endl;
	a.greet();
	R: cout <<"What do you want to order(1-A meal,2-A drink,3-both) ";
	cin >>q;
	switch(q){
	 case 1:
		b.meal();
		break;
	 case 2:
		b.drink();
		break;
	 case 3:
		b.meal();
		b.drink();
		break;
	 case 4:
		cout <<"Thank you for visiting";
		break;
	 default:
		cout<<"Invalid selection"<<endl;
		goto
			R;
		}
cout <<"*************************** THANK YOU ****************************"<<endl;

return 0;
}
