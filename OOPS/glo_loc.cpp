#include<iostream>
using namespace std;

int global = 34;
void show(){
    cout<<global<<endl;
}

int main(){
    int globalx = 56;
    globalx = 4;
    show();

    cout<<"The value of global variable is: "<<global<<endl;
    cout<<"The value of local variable  inside the main() is: "<<globalx;
    return 0;
}              
