#include <iostream>

using namespace std;

const char* getName()
{
	return "Jack Jack";
}

int main()
{
	int fixedArray[] = { 1, 2, 3, 4, 5 };

	int* array = new int[] {1, 2, 3, 4, 5};

	for (int i = 0; i < 5; i++)
	{
		cout << *(array + i) << endl;
	}
	delete[] array;
}