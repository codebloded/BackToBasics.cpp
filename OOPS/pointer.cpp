#include<iostream>

using namespace std;

int main(){
    int a = 3;
    // This is how an poiter is declared this line means the variable 'ptr' holds the address of variable 'a'
    int *ptr = &a;
    //Here the & ----> This is a address of operator 
    cout<<"The address of a is :"<<&a<<endl;
    cout<<"The adddress of a is :"<<ptr<<endl;
    //here the * --->   (value at) Dereferencing opreator 
    cout<<"The value of ptr at adddres a is "<<*ptr<<endl;

    //**************POINTER TO POINTER************
    int **c = &ptr;
    **c = 30;
    cout<<"The value address of ptr is "<<&ptr<<endl;
    cout<<"The value of **ptr at address ptr "<<**c<<endl;

    return 0;
    
}