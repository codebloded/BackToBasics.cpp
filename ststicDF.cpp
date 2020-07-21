#include<iostream>
using namespace std;

class math{
    private:
        static int x; //Static data member ,shared and access by all member functions 
        int id;
    public:
        void setData(void){
            cout<<"Enter the math id "<<endl;;
            cin>>id;
            x++;
        }
        void getData(void)
        {
            cout<<"The id is "<<id<<" And the x is "<<x<<endl;
        }
        static void getx(void)
        {
            cout<<"The value of x is "<<x<<endl;
        }
};

int math :: x; //outside declaration of static data member 

int main()
{   math arrVar[4]; //array as an object 
    //Static member fucntion is aceesd by the class name no object is required to acsess the static member functions 
    for(int i=0 ; i<=4; i++)
    {
        arrVar[i].setData();
        arrVar[i].getData();
        math :: getx();
    }
    return 0;
}