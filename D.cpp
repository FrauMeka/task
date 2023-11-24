#include <iostream>
using namespace std;
int main()
{
    double arr[100];
     int n;
     cin>>n;
     for(int i=0; i<n; i++)
     cin>>arr[i];
     
     int max=arr[0];
     int min=arr[0];
     for(int i=1; i<n;i++)
     {
         if(arr[i]>max)
         max=arr[i];
         
         if(arr[i]<min)
         min=arr[i];
         
     }
     int difference=0;
     for(int i=0; i<n;i++){
         difference=max-min;
         
     }
     cout<<difference;
}