#include<iostream>
using namespace std;

class Student{
    protected:
        int rollNumber;
        string name;
    public:
        void setInfo(int, string);
        void getInfo(void); 
};

void Student :: setInfo(int rn , string _name)
{   
    rollNumber = rn;
    name = _name;
}

void Student::getInfo()
{
    cout<<"Roll number: "<<rollNumber<<endl;
    cout<<"Name: "<<name<<endl;

}

class Exam : public Student{
    protected:
        int python ;
        int networking;
    public:
        void setMarks(float , float);
        void getMarks(void);
};

void Exam :: setMarks(float x, float y)
{
    python = x;
    networking = y;
}
void Exam :: getMarks()
{
    cout<<"Marks in Python :"<<python;
    cout<<"Marks in Networking :"<<networking;
}

class Result : public Exam
{
    public:
        void result(void)
        {
            cout<<"Student result is: "<<(python+networking)/2<<"%"<<endl;
        }
};






int main()
{ 
    Result rohan;
    rohan.setInfo(2,"Rohan");
    rohan.getInfo();
    rohan.setMarks(98.0,89.0);
    rohan.result();

    return 0;
}