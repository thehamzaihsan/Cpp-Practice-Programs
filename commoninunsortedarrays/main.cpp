#include <iostream>
using namespace std;

int main()
{
	int arr1[] = { 8,4,6 };
	int arr2[] = { 4,8,6 };
	int arr3[] = { 1,6,3,4 };
	int arr4[] = { 0,0,0,0,0,0,0,0 };
	
	int size1 = sizeof(arr1) / sizeof(arr1[1]);
	int size2 = sizeof(arr2) / sizeof(arr1[1]);
	int size3 = sizeof(arr3) / sizeof(arr1[1]);

	for (int i = 0; i < size1; i++)
	{
		for (int j = 0; j < size2; j++)
		{
			if (arr1[i] == arr2[j])
				arr4[i] = arr1[i];
		}
	}

	int bigger = 0;
	if (size1 > size2)
		bigger = size1;
	else if (size2 > size3)
		bigger = size2;
	else
		bigger = size3;

	for (int a = 0; a < size1; a++)
	{
		for (int b = 0; b < size2; b++)
		{
			if (arr3[a] == arr4[b])
				arr4[a+bigger] = arr3[a];
		}
	}

	int size4 = sizeof(arr4) / sizeof(arr1[1]);

	for (int k = 0; k < size4; k++)
	{
		if (arr4[k] != 0)
		{
			cout << arr4[k] << " ";

		}
	}

	return 0;
}