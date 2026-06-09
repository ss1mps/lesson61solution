#include <iostream>
using namespace std;

int main() {

	const int SIZE = 5;
	int array[5]{ 1, 2, 3, 4, 5 };

	for (int i = 0; i < SIZE; i++)
	{
		cout << (array + i) << " - " << *(array + 1) << endl;
	}

	return 0;
}