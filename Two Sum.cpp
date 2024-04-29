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




