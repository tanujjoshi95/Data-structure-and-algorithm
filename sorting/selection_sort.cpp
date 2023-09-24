#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int min_indx = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min_indx])
            {
                min_indx = j;
            }
        }
        swap(&arr[min_indx], &arr[i]);        
    }
}

int main()
{
    int arr[] = {10, 39, 34, 78, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    sort(arr, size);
    cout << "The sorted array is : " << endl;
    print(arr, size);
    return 0;
}