#include<iostream>

using namespace std;

int main()
{
    int x[] = {2,3,45,67,87,89,88};
    int *p = x;
    int (*ptr)[7]= &x;

    cout<<"The address of array x is "<<x<<endl;
    cout<<"The address of array x is "<<ptr<<endl;
    cout<<"The address of array x is "<<*ptr<<endl;
    cout<<"The address of array x is "<<*p<<endl;
    cout<<"The address of array x is "<<&p<<endl;
    for(int i=0;i<=6;i++)
    {
    cout<<*(p+i)<<" ";    
    }      

    
    return 0;

}