#include <iostream>
using namespace std;

bool check(int arr[], int size)
{
    // base case
    if (arr[0] > arr[1])
    {
        return false;
    }

    if (size == 0 || size == 1)
    {
        return true;
    }

    // recursive case

    check(arr + 1, size-1);
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    bool c = check(arr, 5);
    if (c)
    {
        cout << " sorted array " << endl;
    }

    else
    {
        cout << "Not sorted " << endl;
    }
    return 0;
}