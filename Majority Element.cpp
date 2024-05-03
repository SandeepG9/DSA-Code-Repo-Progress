//https://leetcode.com/problems/majority-element/description/
#include <iostream>
#include<map>
#include<vector>
using namespace std;
int main()
{
    vector<int>nums = {4,4,4,4,5,2,2,2,2,2,2};
    map<int,int>data;
    for(int i=0;i<nums.size();i++)
    {
        if(data.find(nums[i])!=data.end())
        {
            data[nums[i]]+=1;
        }
        else
        {
            data[nums[i]] = 1;
        }
    }
    int divide_result = nums.size()/2;
    auto first_data = data.begin();
    int max = first_data->second,key;
    cout<<max<<"\n";
    for(auto &n:data)
    {
        cout<<"\n"<<n.first<<" "<<n.second;
    }
    
    for(auto &n:data)
    {
        if(n.second>divide_result)
        {
            max = n.second;
            key = n.first;
        }
    }
    
    cout<<"\nKey "<<key;
    return 0;
}
