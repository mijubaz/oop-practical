#include<iostream>
#include<string>
#include<fstream>
using namespace std;

class Student{
	public:
	string name;
	int age;
	
	void getdata(){
	cout<<"Enter the name:";
	getline(cin,name);
	cout<<"Enter the age:";
	cin>>age;
    }
    
    void display(){
    	cout<<"Name:"<<name<<endl;
    	cout<<"Age:"<<age<<endl;
	}
	
	void writetofile(ofstream& outfile){
		outfile<<name<<endl;
		outfile<<age<<endl;
	}
	
	void readtofile(ifstream& infile){
		getline(infile,name);
		infile>>age;
	}
};

int main(){
	Student student;
	ofstream outfile("Student_file");
	cout<<"Enter the student information:"<<endl;
	student.getdata();
	student.writetofile(outfile);
	outfile.close();
	
	ifstream infile("Student_file");
	if(infile.is_open()){
		student.readtofile(infile);
		cout<<"Student information";
		student.display();
		infile.close();
	}else{
		cout<<"\n Data is not written in file \n";
	}
	return 0;
}
