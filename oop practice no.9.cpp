#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
	string username, address;
	cout<<"Enter the username:";
	getline(cin,username);
	cout<<"Enter the address:";
	getline(cin,address);
	
	ofstream outfile("user_info.txt");
		outfile<<"Username:"<<username<<endl;
		outfile<<"Address:"<<address<<endl;
		outfile.close();
		
	ifstream infile("user_info.txt");
	cout<<"\n Data is written in the file \n";
	string line;
	while (getline(infile,line)){
		cout<<line<<endl;
	}
	infile.close();
	return 0;
}
