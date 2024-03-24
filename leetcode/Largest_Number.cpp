    #include <iostream>  
    #include<vector>
    #include <algorithm>  
    using namespace std;  
   
   class Solution {
public:
    string largestNumber(vector<int>& nums) {

  // first approch
       int i=0;
       int j=0;
       
       while(i<nums.size()-1)
       {
           j=i+1;
           
           while(j<nums.size())
           {
              
             string str1= to_string(i) + to_string(j);
             string str2= to_string(j) + to_string(i);
            //  int num1 = stoi(str1); 
            //  int num2 = stoi(str2); 
             if(str2>=str1)
             {
                 swap(nums[i],nums[j]);
             }
             j++;
           }
        i++;
       } 

       string strres="";
       for(int k=0;k<nums.size();k++)
       {
           strres = strres + to_string(nums[k]);
       }
       return strres;

       // second approch

    sort(nums.begin(),nums.end(),[&](const int& a,const int& b){
            string s1 = to_string(a) + to_string(b);
            string s2 = to_string(b) + to_string(a);
            return s1 > s2;
        });
        string ans = "";
        for(auto& c:nums){
            ans += to_string(c);
        }
        if(ans[0]=='0'){
            return "0";
        }
        return ans;
    
    }
};