#include <iostream>

using namespace std;

int main()
{
	int firstValue, secondValue;
	int *pointer;

	//points to the address
	//address value is assigned from pointer to firstValue with & operator
	//since pointer is pointing at mem address
	//whatever it becomes is linked to that value
	pointer = &firstValue;
	*pointer = 10;

	pointer = &secondValue;
	*pointer = 20;

	cout << "firstValue: " << firstValue << endl;
	cout << "secondValue: " << secondValue << endl;

	int first, second;
	int *p1, *p2;

	p1 = &first;
	p2 = &second;

	*p1 = 10;
	*p2 = *p1;
	p1 = p2;
	*p1 = 20;
}
