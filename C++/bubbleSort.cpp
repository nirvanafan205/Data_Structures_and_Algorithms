#include <iostream>

using namespace std;

void sort(int arr[], int size)
{
	for(int i = 0; i < size - 1; i++)
	{
		for(int j = 0; j < size - i - 1; j++)
		{
			if(arr[j] > arr[j + 1])
			{
				swap(arr[j], arr[j + 1]);
			}
		}
	}
}

void print(int nums[], int size)
{
	for(int i = 0; i < size; i++)
	{
		cout << nums[i] << " " << endl;
	}
}

int main()
{
	int nums[] = { 5, 1, 4, 2, 8 };
	int size = sizeof(nums) / sizeof(nums[0]);


	cout << "Unsorted: " << endl;
	print(nums, size);

	sort(nums,size);

	cout << "\nSorted: " << endl;
	print(nums, size);
}
