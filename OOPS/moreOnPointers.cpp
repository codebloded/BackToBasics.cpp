#include<iostream>
using namespace std;

int main()
{   //Pointers baisc
    int x = 56;
    int *ptr = &x;
    cout<<"The value x is at ptr is :"<<*(ptr)<<endl;
    cout<<"The address of x is  :"<<(ptr)<<endl;

    //new keyword   is use for dynamic allocation of memory to the varibles
    int *m = new int(56);
    cout<<"The value of  m is "<<*(m)<<endl;
    cout<<"The addres of  m is:"<<m<<endl;

    //Dyanamic memory alloction in an array usng new keyboard

    int *arr = new int[2];
    arr[0] = 10;
    arr[1]= 56;
    //delete keyword  is used to delete the all dynamic allocation to the variable and arrays , after delete the memory allocation the variable fills itself with the garbage value;
    delete[] arr;
    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;

    cout<<"The address of arr "<<(arr)<<endl;
    


    return 0;
}