#include<iostream>

using namespace std;

int main(){
    int arr[]={1,34,65,7,67,88};
    for(int i=0; i<=5; i++)
    {
        cout<<arr[i]<<endl;
 
    }
    cout<<endl;
    int n=0;
    while(n<5)
    {
        cout<<arr[n]<<" ";
        n++;
    }
    return 0;

    
}