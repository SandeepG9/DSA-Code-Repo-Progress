//https://leetcode.com/problems/two-sum/

//Solved using Brute Force Algorithm

#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;
int main()
{
    vector<int> arr = {2,5,10,1,3,0};
    int n=6;
    
    sort(arr.begin(),arr.end());
    
    cout<<arr[n-1];
    return 0;
}

// Optimized Code

#include <iostream>
#include<map>
using namespace std;
int main()
{
    int arr[5]= {2,6,5,8,11},n=5;
    int target = 14;
    map<int,int> data;
    int remaining_value;
    int arr2[1];
    
    // optimized code for two sum problem
    for(int i=0;i<n;i++)
    {
        remaining_value = target-arr[i];
        auto it = data.find(remaining_value);
        if(it!=data.end())
        {
            arr[0] = i;
            arr[1] = it->second;
        }
        data[arr[i]] = i;
    }
    // printing indexes
    cout<<arr2[0]<<" "<<arr2[1];
    return 0;
}





