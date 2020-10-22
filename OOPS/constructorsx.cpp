#include<iostream>
using namespace std;

class Complex{
    private:
        int a;
        int b;
    public:
    Complex(int x, int y);
        void printNum(){
            cout<<"The value of the complex number is : "<<a<<"+"<<b<<"i"<<endl;
        }
};

Complex::Complex(int x, int y)
{   
    a=x;
    b=y;
}

int main()
{   //Implicit caling
    Complex c(23,5);
    c.printNum();
    
    return 0;
} 