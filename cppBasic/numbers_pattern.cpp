#include<iostream>
using namespace std;

int main(){
    int row;
    int count=1;
    cin>>row;
    for(int i=1; i<=row; i++){
        for(int j=1; j<=i; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    //Floyd's triangle
    cout<<"Floyd's traingle"<<endl;
    for(int i=1; i<=row; i++){
        for(int j=1; j<=i; j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
    return 0;
}