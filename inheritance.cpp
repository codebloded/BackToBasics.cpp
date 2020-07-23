#include<iostream>
using namespace std;

//Base class
class Employee
{
    private:
        int salary;
    public:
        int empId;
        Employee(int inpId)
        {
            empId = inpId;
        }
        Employee(){}
        void showData(void)
        {
            cout<<"The id of Employee is"<<empId<<endl;
        }
};

//Derived Class Coder
 class Coder : public Employee{
    public:
    int langCode;
    int langStar;
    Coder(int _langCode , int id)
    {   
        langCode = _langCode;
        langStar = 12;
        empId = id ;
    }
    void getCoder(void)
    {   
        
        cout<<"The language code and the language start od the coder is "<<langStar<<" "<<langCode<<" "<<empId<<endl;
    }
 };


int main()
{
    Employee rohan(200) , tan(56);
    rohan.showData();
    tan.showData();
    Coder ram(3,45), python(5,56);
    ram.getCoder();
    python.getCoder();
    ram.showData();

    return 0;
}
