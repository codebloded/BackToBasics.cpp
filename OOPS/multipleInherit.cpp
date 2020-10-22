#include<iostream>
using namespace std;

class _BaseA
{
    protected:
        int a;
    public:
        void setData(int x)
        {
            a=x;
        }
        
};

class _BaseB
{
    protected:
        int b;
    public:
        void setB(int y )
        {
            b=y;
        }
};

class Derived : public _BaseA , public _BaseB{
    public:
        void display()
        {
            cout<<a<<" "<<b; 
        }
        
};

int main()
{   
    Derived num;
    num.setData(34);
    num.setB(45);
    num.display();
    return 0;
}