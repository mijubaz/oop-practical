#include<iostream>
using namespace std;

class Polygon{
	protected:
		double width, height;
	public:
		Polygon(double w, double h){
			width=w;
			height=h;
		}
}; 

class Triangle:public Polygon{
	public:
		Triangle(double w, double h):Polygon(w,h){}
			double area(){
				return 0.5*width*height;
			}
};

class Rectangle:public Polygon{
	public:
		Rectangle(double w, double h):Polygon(w,h){}
		double area(){
			
				return width*height;
		}
};

int main(){
	Rectangle rect(5,10);
	Triangle tri(5,10);
	cout<<"Rectangle area:"<<rect.area()<<endl;
	cout<<"Triangle area:"<<tri.area()<<endl;
	return 0;
}
