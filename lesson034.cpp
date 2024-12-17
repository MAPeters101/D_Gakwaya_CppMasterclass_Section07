#include <iostream>
#include <string>

using namespace std;


int main() {
	//cout << "Hello C++20 " << endl;

	//int age{ 21 };
	//cout << "Age : " << age << endl;

	//cerr << "Error message : Something is wrong" << endl;
	//clog << "Log message : Something happened " << endl;

	int age1;
	std::string name;

	cout << "Please type your name and age : " << endl;
	cin >> name >> age1;

	cout << "Hello " << name << " you are " << age1 << " years old!" << endl;


	return 0;
}


