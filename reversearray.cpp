#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};


/*------------>Reverse the array
    int start=0;
    int end=9;
    
    while(start<=end)
    {
        int temp=a[end];
        a[end]=a[start];
        a[start]=temp;
        start++;
        end--;
    }
    for(int i=0;i<=9;i++)
    {
        cout<<a[i]<<endl;
    }
*/


/*----------->Swap the  alternate elements in an array

    int start=0;
    int next=start+1;
    while(next<=9)
    {
        swap(a[start],a[next]);
        start=next+1;
        next+=2;
    }

    for(int i=0;i<=9;i++)
    {
        cout<<a[i]<<endl;
    }

*/


    int ans=0;
    int arr[5]={1,3,2,4,2};
    for(int i=0;i<5;i++)
    {
        ans=ans^arr[i];
    cout<<ans<<endl;
    }
    for(int i=0;i<5;i++)
    {
        ans=ans^i;
    }
    // return ans;
    cout<<endl;
    cout<<ans<<endl;
    
}