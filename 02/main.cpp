#define SUB(a, b) ((a)-(b))


#include <iostream>


using namespace std;

int main(int argc, char** argv) {
	system("chcp 1251");

	int a = 6, b = 5, c = 2;
	cout << SUB(a, b) << endl;
	cout << SUB(a, b) * c << endl;
	cout << SUB(a, b + c) * c << endl;
	return 0;
}