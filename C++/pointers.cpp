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

	int first = 5, second = 15; //initial values

	cout << "\nValues before pointer changes\nFirst value: " << first << endl;
	cout << "Second value: " << second << endl;


	int *p1, *p2; //pointers created != int *p1, p2
		      //both variables needs * to be pointers

	p1 = &first; //p1 is connected through the address of first
	p2 = &second;//p2 is connected through the address of second


	*p1 = 10; //p1 is now 10 which is connected through the address of first
	*p2 = *p1; //value pointed by p2 is now the value pointed by p1
	p1 = p2; //value of pointer is copied
	*p1 = 20; //p1 = 20

	cout << "First: " << first << endl;
	cout << "Second: " << second << endl;

	//array of pointers
	int nums[5];
	int *p;

	p = nums;

	//inputs values into array
	for(int i = 0; i < 5; i++)
	{
		*p = i;
		p++;
	}

	//outputs values of the array
	for(int i = 0; i < 5; i++)
	{
		cout << nums[i] << endl;
	}

}
