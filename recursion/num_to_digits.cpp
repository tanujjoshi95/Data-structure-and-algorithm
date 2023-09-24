#include<iostream>
using namespace std;

void numb(int num,int l)
{
    //base case


    if(l==0)
    {
        return ;
    }

  
 
    // hlo world

    else{

          numb(num/10,l-1);

        int r=num%10;
        if(r==1)
        {
            cout<<"one ";
        }

        else if(r==2)
        {
            cout<<"Two ";
        }
         else if(r==3)
        {
            cout<<"Three ";
        }
         else if(r==4)
        {
            cout<<"Four ";
        }
         else if(r==5)
        {
            cout<<"Five ";
        }
         else if(r==6)
        {
            cout<<"Six ";
        }
         else if(r==7)
        {
            cout<<"Seven ";
        }
         else if(r==8)
        {
            cout<<"Eight ";
        }
         else if(r==9)
        {
            cout<<"Nine ";
        }
         else if(r==0)
        {
            cout<<"Zero ";
        }
    }

    //recursion case
    

}

int main()
{
    numb(123,3);
    return 0;
}