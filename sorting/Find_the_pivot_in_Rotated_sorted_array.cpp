#include<iostream>
using namespace std;

int pivot(int arr[7],int l)
{
    int s=0;
    int e=l-1;
    int mid=s+(e-s)/2;
    while (s<e)
    {
        
        if(arr[mid]>=arr[0])
        {
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
    
}

int main()
{
    int arr[7]={4,5,6,7,0,1,2};
   int ans = pivot(arr,7);
   cout<<"The pivot is "<<arr[ans]<<endl;
   return 0;
}