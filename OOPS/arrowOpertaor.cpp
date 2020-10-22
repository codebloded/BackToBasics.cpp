#include<iostream>
using namespace std;

class Complex{
    private:
        int real;
        int imaginary;
    public:
        void setData(int x , int y )
        {
            real =x;
            imaginary = y;
        }
        void printData(void)
        {
            cout<<"The Real part of the complex numbers is "<< real<<endl;
            cout<<"The imaginary part of the complex number is"<< imaginary<<endl;
        }
};

int main()
{   
    Complex *ptr = new Complex;
    //This is the arrow operator , this is used for dereferencing the pointer to get the value;

    ptr->setData(23,4);
    ptr->printData();  


    //Array of the objects 
    Complex *p = new Complex[2];
    p->setData(4,5);
    p->printData();
    return 0;
}