#include<bits/stdc++.h>
using namespace std;

//TOOP - BOTTOM APPROCH
// Conatin Reccursion + Memorization
int fibo(int n,vector<int>&ans)
{
    if(n==1 || n==0)
    {
        return n;
    }
    if(ans[n]!=-1)
    {
        return ans[n];
    }
    ans[n] = fibo(n-1,ans)+fibo(n-2,ans);
    return ans[n];
    
}

// BOTTOM -UP APPROCH(TABULATION METHOD)

int fibo2(int n,vector<int>&ans)
{
    ans[0]=0;
    ans[1]=1;
    for(int i=2;i<=n;i++)
    {
        ans[i]=ans[i-1]+ans[i-2];
    }
    return ans[n];

}

//SPACE OPTIMIZATION

int fibo3(int n)
{
    int prev1=0;
    int prev2=1;
    int cur=-1;
    for(int i=2;i<=n;i++)
    {
        cur=prev1+prev2;
        prev1=prev2;
        prev2=cur;
    }
    return cur;
}



int main()
{
    int n=6;
    vector<int> ans(n+1,-1);
    cout<<"The ans is "<< fibo(n,ans)<<endl;
    cout<<"The ans is "<< fibo2(n,ans)<<endl;
    cout<<"The ans is "<< fibo3(n)<<endl;
    return 0;
}