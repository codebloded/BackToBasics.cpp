#include<iostream>

using namespace std;

int main()
{   int n;
    cout<<"Enter the value of n ";
    cin>>n;
    for(int i=0 ;i<=n; i++)
    {
        for(int k=0; k<=n; k++){
        cout<<"* ";
        }
        cout<<endl;
    }
    return 0;

}