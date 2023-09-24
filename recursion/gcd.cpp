#include<iostream>
using namespace std;

int gcd(int a,int b)
{
    int c=a-b;

    // base case

    if(c==0)
    {
        return b;
    }

    //recursive case

    gcd(b,c);


}

int main()
{
    int r = gcd(36,24);
    cout<<"Gcd is "<<r;
    return 0;
}
