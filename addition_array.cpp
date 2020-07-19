#include<iostream>

using namespace std;

int main()
{
    int n ;
    cout<<"Enter the length of array";
    cin>>n;
    int arr[n];
    int arr1[n];

    for(int i=0; i<=n;i++)
    {
        cin>>arr[i];
    } 
    for(int k=0; k<=n; k++)
    {
        cout<<arr[k];
    }
    for(int j=0; j<=n;j++)
    {
        cin>>arr1[j];
    } 
    for(int m=0; m<=n;m++)
    {
        cout<<arr1[m];

    }



    return 0;
} 