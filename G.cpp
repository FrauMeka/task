#include <iostream>

using namespace std;

int main()
{
    int arr[100];
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    cin>>arr[i];
    double average=0;
    for(int i=0;i<n;i++){
        average=average+arr[i];
        
    }
    average=average/n;
    int sum=0;
    int count=0;
    for(int i=0;i<n;++i){
        if(arr[i]>average){
            sum=sum+arr[i];
            ++count;
        }
    }
    cout<<sum<<" "<<count;
    
    return 0;
}