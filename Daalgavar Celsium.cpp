#include<iostream>

using namespace std;

int main(){
	
	
	//celsium to fahren
	double q;
	double fahr;
	cout<<"Please Enter Celsium ";
	cin>>q;
	fahr = q*1.8+32;
	cout<<q<<" "<<"Celsium to Fahrenheit is "<<fahr<<endl;
	
	
	//Fahr to Celsium
	double w;
	double cels;
	double fahren;
	cout<<"Please Enter Fahnrenheit ";
	cin>>w;
	cels = w-32;
	fahren = cels/1.8;
	cout<<w<<" "<<"Fahrenheit to Celsium is "<<fahren;
	
	
	
	
	
	
	
	return 0;
	
}
