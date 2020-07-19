#include<iostream>
using namespace std;
class Employee
{
    private:
        int salary, pts;
    public:
        int experience;
        string name ;
        void setData(int _salary,int _pts);
        void getData();
};
void Employee :: setData(int _salary, int _pts){
    salary=_salary;
    pts = _pts;
}
void Employee :: getData(){
    cout<<"The name of the Employee is :"<<name<<endl;
    cout<<"The experience of Employee is :"<<experience<<endl;
    cout<<"The salary of Employee is :"<<salary<<endl;
    cout<<"The points of Employee is :"<<pts<<endl;
}
int main()
{
    Employee rohan;
    rohan.name = "Codebloded(Rohan)";
    rohan.experience =4;
    rohan.setData(4,24);
    rohan.getData();
    return 0;
}
