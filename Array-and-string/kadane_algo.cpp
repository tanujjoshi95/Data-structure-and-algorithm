#include <iostream>
#include <algorithm>
using namespace std;

int maxsum(int arr[], int l)
{
    int sum = 0;
    int maxi = arr[0];
    for (int i = 0; i < l; i++)
    {
       // printf("1");
        sum = sum + arr[i];
        maxi = max(maxi, sum);
        

        if (sum < 0)
        {
            sum = 0;
        }
    }
    return maxi;
}

int main()
{
    
    int arr[10] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int l=sizeof(arr)/sizeof(arr[0]);
    int r = maxsum(arr, l);
    

    cout<<"The max sum is : "<<r;

    // printf("yoo");
    return 0;
}