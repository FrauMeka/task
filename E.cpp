#include <iostream>
using namespace std;
int main()
{
    int arr[1000];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int min=arr[0];
    int mindex=0;
    for(int i=1;i<n; i++)
    {
        if(arr[i]<min){
            min=arr[i];
            mindex= i;
        }
    }
    min=arr[mindex];
    arr[mindex]=arr[0];
    arr[0]=min;
    for(int i=0; i<n; i++)
    cout<<arr[i]<<" ";
    return 0;
    
}