#include <bits/stdc++.h> 
using namespace std;

void printArray(int arr[],int n)
{
    for (int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void Array(int arr[],int n)
{
    for (int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

void sort012(int *arr, int n)
{
   //   Write your code here
   //in this question we will bring all the 0' to left and all 1's to right
   int i=0;
   int j=n-1;
   while(i<j)
   {
      if(arr[i]==0 && i<j) //if 0 is at i'th position and 1 is 
         i++;
      if(arr[j]==1 && i<j)
         j--;
      if(i<j)
      {
         swap(arr[i],arr[j]);
         i++;
         j--;
      }
   }
}

int main()
{
    int arr[]={0,1,0,1,0,0,1};
    int n=7;
    sort012(arr,7);
    printArray(arr,7);
}
