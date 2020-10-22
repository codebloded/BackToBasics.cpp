#include<iostream>
using namespace std;

class Aero
{
    private:    
        int a;
    public:
        void setData(int a)
        {
            this->a =a;  // This is the concept of "this" pointer ,, basiaclly here "this->a " means that "this" is the variable named a which is  comes form the object of class Aero;
        }
        void print(void){
            cout<<"The vaue of a is "<<a;
        }
};

int main()
{   Aero x;    
    x.setData(34);
    x.print();
     return 0;
}
