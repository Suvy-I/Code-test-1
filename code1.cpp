#include <iostream>
using namespace std;

void split_list(int input_list[], int middle_value, int l)
{
	int a = 0, b = 0, c = 0;
	int* less = new int[l];
	int* more = new int[l];
	int* equal = new int[l];
	for (int i = 0; i < l; i++)
	{
		if (input_list[i] < middle_value)
		{
			less[a] = input_list[i];
			a++;
		}
		if (input_list[i] > middle_value)
		{
			more[b] = input_list[i];
			b++;
		}
		if (input_list[i] == middle_value)
		{
			equal[c] = input_list[i];
			c++;
		}
	}
	cout << "List 1: ";
	for (int i = 0; i < a; i++)
	{
		cout << less[i] << ", ";
	}
	cout << '\n';

	cout << "List 2: ";
	for (int i = 0; i < b; i++)
	{
		cout << more[i] << ", ";
	}
	cout << '\n';

	cout << "List 3: ";
	for (int i = 0; i < c; i++)
	{
		cout << equal[i] << ", ";
	}
	cout << '\n';
}
int main()
{
	int arr[] = {12,43,53,12,2,75,5,67,35,2134,5,1,435,2,5646,678,53,45,25,47653,3,13,9};
	int len = sizeof(arr) / sizeof(arr[0]);
	split_list(arr, 400, len);
}