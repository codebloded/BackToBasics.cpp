#include<iostream>
using namespace std;

class Base{
    private:
        int data1;
    public:
        int data2;
        int data3;
        void setData()
        {
            data1 =10;
            data2 =20;
        }
        int getData1();
        int getData2();
};

int Base :: getData1()
{
    return data1;
}

int Base :: getData2()
{
    return data2;
}

//DERIVED CLASS
class Derived : private Base{
    int data3;
    public:
        void multiplyer();
        void display();

};

void Derived :: multiplyer(void)
{
    setData();
    data3 = data2 * getData1();
}
void Derived :: display(void) 
{
    cout<<"The value of data1 is :"<<getData1()<<endl;
    cout<<"The value of data2 is :"<<data2<<endl;
    cout<<"The value of data3 is :"<<data3<<endl;

}
int main()
{   
    Derived num;
    
    num.multiplyer();
    num.display();
    return 0;
}