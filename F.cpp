#include <iostream>

using namespace std;

int main()
{
    int arr[1000];
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    cin>>arr[i];
    int max=arr[0];
    int mindex=0;
    for(int i=1; i<n;i++)
    {
        if(arr[i]>=max){
            max=arr[i];
            mindex=i;
        }
    }
    max=arr[mindex];
    arr[mindex]=arr[n-1];
    arr[n-1]=max;
    for(int i=0;i<n; i++)
    cout<<arr[i]<<" ";
    
    return 0;
}