#include<iostream>
#include <vector>
using namespace std ;

void permu(vector<int>v,vector<vector<int>>&ans,int i)
{
    //base case

    if(i>=v.size())
    {
        ans.push_back(v);
        return ;
    }

    for(int j =i;j<v.size();j++)
    {
        swap(v[i],v[j]);
        permu(v,ans,i+1); 
        swap(v[i],v[j]);         

    }
    return ;
}

int main()
{
    vector<int>v = {1,2,3};
    vector<vector<int>> ans;
    permu(v, ans,0);   
    // for(int i=0;i<ans.size(),i++)
    // {
    //     cout<<ans[i]<<" ";
    // }

    return 0;
}