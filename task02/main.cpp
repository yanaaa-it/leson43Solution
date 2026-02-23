#include<iostream>
using namespace std;


int main() {
	int length;

	do {
		cout << "input size of array: ";
		cin >> length;
	} while (length <= 0);

	int count = 0;

	while (length>0) {
		length /= 2;
		count++;
	}

	cout << "result count:" << count << endl;


	return 0;
}