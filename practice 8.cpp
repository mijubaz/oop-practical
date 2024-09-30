#include<iostream>
#include<fstream>
using namespace std;

int main(){
	char ch;
	ofstream outfile;
	ifstream infile;
	
	outfile.open("output.txt");
	cout<<"Enter text(enter 'q' to quit):\n";
	while (ch!='q'){
		ch=cin.get();
		outfile.put(ch);
	}
	outfile.close();
	infile.open("output.txt");
	cout<<"\n Reading from the file:\n";
	while (infile.get(ch)){
		cout<<ch;
	}
	infile.close();
	return 0;
}
