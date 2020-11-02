#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int n ;
    bool flag=0;
    cin>>n;
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0){
            cout<<"Non-Prime"<<endl;
            flag = 1;
            break;
        }
    }
    if(flag==0){
        cout<<"Prime"<<endl;
    }
    return 0;
}