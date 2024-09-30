#include<iostream>
using namespace std;

class Feet{
	public:
	int ft;
	int in;
	
	Feet(int feet, int inches){
		ft=feet;
		in=inches;
	}
	void display(){
	cout<<ft<<"feet"<<in<<"inches"<<endl;
	}
};

class Kilometer{
	public:
	int km;
	int m;
	
	Kilometer(int meter, int kilometer){
		kilometer=km;
		meter=m;
	}
	void display(){
	cout<<"kilometer"<<km<<"meter"<<m<<endl;
	}
	
	Kilometer(Feet feet){
		double Inches=feet.ft*12+feet.in;
		double Feet=Inches/12;
		km=Feet/3280;
		m=(Feet-km*3280)*12*0.0254;
	}
};

int main(){
	Feet feet(5,5);
	Kilometer kilometer(feet);
	cout<<"feet"<<endl;
	feet.display();
	
	cout<<"kilometer"<<endl;
	kilometer.display();
	
	return 0;
}
