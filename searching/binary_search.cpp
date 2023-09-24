#include <iostream>
using namespace std;

int main()
{
	// the array must be sorted 
	
	int arr[6] = {10, 23, 45, 56, 61, 63};
	int key;
	int l = 6;
	int s = 0, e = l - 1, mid;
	cout << "Enter the key value : ";
	cin >> key;
	mid = (s + e) / 2;

	while (s <= e)
	{

		if (arr[mid] == key)
		{
			cout << " Element at index"<< mid;
			break;
		}

		else if (key > arr[mid])
		{
			s = mid + 1;
		}

		else if (key < arr[mid])
		{
			e = mid - 1;
		}

		mid = (s + e) / 2;
	}

	return 0;
}