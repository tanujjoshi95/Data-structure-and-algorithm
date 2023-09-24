#include <iostream>
using namespace std;

void insertionSort(int arr[5],int  n,int j) // Function over loading
{

    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {

            if (arr[j] > temp)
            {
                // shift
                arr[j + 1] = arr[j];
            }
            else
            { // ruk jao
                break;
            }
        }
        // copy temp value
        arr[j + 1] = temp;
    }
}
void show(int *arr, int size)
{
    cout << "\n";
    for (int i = 0; i < size; i++)
    {

        cout << *(arr + i) << " ";
    }
    cout << "\n";
}

void insertionSort(int arr[5], int size)
{

    for (int i = 1; i < size; i++)
    {
        int j;
        int temp = arr[i];
        for (j = i - 1; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }

            else
            {
                break;
            }
        }
        arr[j + 1] = temp;
    }
}

int main()
{
    int arr[5] = {2, 6, 4, 5, 7};
    cout << "Before sorting : ";
    show(arr, 5);
    cout << "After sorting : ";
    insertionSort(arr, 5);
    show(arr, 5);

    return 0;
}
