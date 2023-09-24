#include <iostream>
using namespace std;

int search (int arr[],int size,int key)
{
    // base case
    if(arr[0]==key)
    {
        return arr[0];
    }

    if(size==0)
    {
        return -1;
    }

    //recursive case


    search(arr+1,size-1,key);


}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int c = search(arr, 5,6);
    if(c==-1)
    {
        cout<<"Not found ";

    }

    else{
        cout<<"found ";
    }

    return 0;
    
}




