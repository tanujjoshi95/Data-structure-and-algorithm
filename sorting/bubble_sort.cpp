#include <iostream>
using namespace std;

void show(int *arr, int size)
{
    cout << "\n";
    for (int i = 0; i < size; i++)
    {

        cout << *(arr + i) << " ";
    }
    cout << "\n";
}

void sorting(int *arr, int size)
{
    cout << "\n";
    for (int i = 0; i < size; i++)
    {
        for (int j = size - 1; j > i; j--)
        {
            if (*(arr + i) > *(arr + j))
            {
                int temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
}

int main()
{
    int arr[5] = {2, 6, 4, 5, 7};
    cout << "Before sorting : ";
    show(arr, 5);
    cout << "After sorting : ";
    sorting(arr, 5);
    show(arr, 5);

    return 0;
}