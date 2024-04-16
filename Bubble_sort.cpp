#include <iostream>
void bubbleSort(int *arr,int n);
// using namespace std;

int main()
{
    
    int arr[6]={13,46,24,52,20,9},n=6;
    
    std::cout<<"Before Sorting";
    
    for(int i=0;i<=n-1;i++)
    {
        std::cout<<arr[i]<<" ";
    }
    
    bubbleSort(arr,n);
    
    return 0;
}

void bubbleSort(int *arr,int n)
{
    int temp=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j+1]<arr[j])
            {
                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    std::cout<<"\nAfter Swapping";
    for(int i=0;i<=n-1;i++)
    {
        std::cout<<arr[i]<<" ";
    }
}
