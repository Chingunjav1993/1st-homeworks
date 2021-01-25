#include<iostream>
using namespace std;
int main(){
	
	
	//rectangle perimeter
	double n,m;
	double peri;
	cout<<"Please Enter Length of Rectangle "<<endl;
	cin>>n;
	cout<<"Please Enter Width of Rectangle "<<endl;
	cin>>m;
	peri = 2*n+2*m;
	cout<<"Perimeter of Rectangle is "<<peri<<endl;
	
	
	//rectangle area
	double k,l;
	double area;
	cout<<"Please Enter Length of Rectangle "<<endl;
	cin>>k;
	cout<<"Please Enter Width of Rectangle "<<endl;
	cin>>l;
	area = k*l;
	cout<<"Area of Rectangle is "<<area<<endl;
	
	
	//circle diameter
	double o;
	double dia;
	cout<<"Please Enter Radius of Circle "<<endl;
	cin>>o;
	dia = 2*o;
	cout<<"Diameter of Circle is "<<dia<<endl;
	
	
	//circle area
	double p;
	double ara;
	cout<<"Please enter Radius of Circle "<<endl;
	cin>>p;
	ara = p*p*3.14;
	cout<<"Area of Circle is "<<ara<<endl;
	
	
	//circle circumference
	double b;
	double circ;
	cout<<"Please Enter Radius of Cirle "<<endl;
	cin>>b;
	circ = 2*3.14*b;
	cout<<"Circumference of Circle is "<<circ<<endl;
	
	
	
	
	return 0;
}
