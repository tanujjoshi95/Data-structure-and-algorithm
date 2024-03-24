#include <iostream>
using namespace std;

void DNF(int arr[],int l)
{
    int low=0;
    int mid=0;
    int high=l-1;
    while(mid<=high)
    {
        if(arr[mid]==0)
        {
            swap(arr[mid],arr[low]);
            mid++;
            low++;

        }

        else if(arr[mid]==1)
        {
            mid++;
        }

        else
        {
            swap(arr[high],arr[mid]);
            high--;

        }
    }

    for(int i=0;i<l-1;i++)
    {
        cout<<arr[i]<<" ";
    }
    

}


int main()
{
    int arr[]={0,1,0,1,0,0,2,1,2,0,0,2,0,1,2,1,0};
    int l =sizeof(arr)/sizeof(arr[0]);

    DNF(arr,l);

    return 0;
}