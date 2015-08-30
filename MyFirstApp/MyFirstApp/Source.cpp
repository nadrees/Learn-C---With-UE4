#include <iostream>
#include <string>

using namespace std;

int main() {
	string name;
	cout << "What is your name?" << endl;
	cin >> name;
	printf("Hello %s\n", name.c_str());
	return 0;
}