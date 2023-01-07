#include <iostream>

int main()
{
	using namespace std;

	const int value = 5;
	const int* ptr = &value;
	//*ptr = 6;
	cout << *ptr << endl;

	return 0;
}