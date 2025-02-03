#include <iostream>

using namespace std;

consteval int get_value() {
	return 4;
}

int main() {
	constexpr int value = get_value();
	cout << "value : " << value << endl;
	return 0;
}

