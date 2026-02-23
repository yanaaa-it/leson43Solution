#include"util.h"


int main() {
	int array[DEFAULT_SIZE];

	int length;
	int a=-20, b=20;

	do {
		cout << "input size of array: ";
		cin >> length;
	} while (length <= 0);

	init_random(array, length, a, b);

	print("result array:\n");
	print(convert(array, length) + "\n");

	int value = 17;

	bool result = search_linear(array, length, value);

	print(result ? "yes" : "no");
	print("\nindex of firat element -" + to_string(get_first_element(array, length, value)));
	print("\nindex of last element -" + to_string(get_last_element(array, length, value)));
	print("\nindex of last element -" + to_string(count_element(array, length, value)));


	return 0;
}