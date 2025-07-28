#include <iostream>

using namespace std;


void welcome(string name){
	
	
	cout << "Welcome to C++ " << name << endl;
	cout << "Welcome to C++ " << name << endl;
}

int main(){
	string user_name;
	cout << "Enter your name here: " << endl;
	getline(cin,user_name);
	
	
	welcome(user_name);
	return 0;
	
	
	
}
