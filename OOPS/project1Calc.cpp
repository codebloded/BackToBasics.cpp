#include<iostream>
using namespace std;

class SimpleCalculator{
    protected:
        int a;
        int b;
    public:
        //Function Prototype
        void utility(float, float);  

};

void SimpleCalculator::utility(float x, float y)
{
    a=x;
    b=y;
    int opt;
    do
    {
    cout<<"1.ADDITION"<<endl;
    cout<<"2.SUBTRACTION"<<endl;
    cout<<"3.DIVISION"<<endl;
    cout<<"4.MULTIPICATION"<<endl;
    cout<<"5.EXIT"<<endl;
    cout<<endl;
    cout<<"Enter the operation"<<endl;
    cin>>opt;
    if (opt==6)
    {
        break;
    }    
    switch(opt)
    {
        case 1:
            cout<<"The addition is :"<<a+b<<endl;
            break;
        case 2:
            cout<<"The subtraction is :"<<a-b<<endl;
            break;
        case 3:
            cout<<"The division is :"<<a/b<<endl;
            break;
        case 4:
            cout<<"The product is :"<<a*b<<endl;
            break;
        case 6:
            cout<<"INVALID"<<endl;
            break;
        default:
            cout<<"EXITING ...."<<endl;
    }
   } while(opt!=5);
    
}

int main()
{
    SimpleCalculator calc;
    calc.utility(1067.0,78.9);
    
    return 0;

}