#include<iostream>
using namespace std;

class B;

class A
{
    private:
        int data_A;
    public:
        void setData(int value)
        {
            data_A=value;
        }
        friend int swap(A & , B &);
        void display(void)
        {
            cout<<"The value from class A is "<<data_A<<endl;
        }
};

class B
{
    private:
        int data_B;
    public:
        void setData(int value)
        {
            data_B = value;
        }
        friend int swap(A & , B &);
        void display(void)
        {
            cout<<"The value from class B is :"<<data_B<<endl;
        }
};

int swap(A &x,B &y)
{   
    int temp;
    temp = x.data_A;
    x.data_A = y.data_B;
    y.data_B = temp;
    return 0;
}


int main()
{   
    A objA;
    B objB;
    objA.setData(23);
    objB.setData(45);
    objA.display();
    objB.display();
    int swaped = swap(objA , objB);
    cout<<"The value from class A after swapped is : ";
    objA.display();
    cout<<"The value from class B after swapped is : ";
    objB.display();

    

    return 0;

}