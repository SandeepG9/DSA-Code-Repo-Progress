#include <iostream>
using namespace std;
int main()
{
    int arr[6] = {13,46,24,52,20,9},n=6;
    int minimum_value=0,temp,flag=0;
    for(int i=0;i<=n-1;i++)
    {
        minimum_value = i;
        for(int j=i;j<=n-1;j++)
        {
            if(arr[j]<arr[minimum_value])
            {
                flag = 1;
                minimum_value = j;
            }
        }
        if(flag==1)
        {
           temp = arr[i];
           arr[i] = arr[minimum_value];
           arr[minimum_value] = temp;
           flag=0;
        }
        
    }
    
    for(int i=0;i<=n-1;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
