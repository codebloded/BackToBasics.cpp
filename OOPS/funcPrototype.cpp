#include<iostream>

using namespace std;

//This is funcion protoptyping
int pattern(int);  

void greet(); // This is also a prototype with no argumment 

int main()
{
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    pattern(n);
    greet();
    return 0;
}

//Function declaration
int pattern(int x)
{
    for(int i=0;i<=x;i++)
    {
        for(int k=0;k<=i; k++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}

void greet(void)
{
    cout<<"You have sucessfully printed the pattern congo :)";
}