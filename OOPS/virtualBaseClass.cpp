#include<iostream>
using namespace std;

class Student{
    protected:
        int rollNo;
    public:
        void set_rollNo(int r)
        {
            rollNo = r;
        }
        void printRoll(void)
        {
            cout<<"Student Roll No."<<rollNo<<endl;
        }
};

class Test : virtual public Student{
    protected:
        float python;
        float web;
        float cpp;
    public:
        void set_marks(float p, float w , float c)
        {
            python =p;
            web = w;
            cpp = c;

        }
        void print_marks(void){
            cout<<"The marks in Python is: "<<python<<endl;
            cout<<"The marks in web development is: "<<web<<endl;
            cout<<"The marks in C++ Programming is: "<<cpp<<endl;
        }
};

class Traning : virtual public Student{
    protected:
        int traningStars;
    public:
        void setStars(int st){
            traningStars = st;
        }
        void print_Stars(void){
            cout<<"The Traning Stars of student is: "<<traningStars<<endl;
        }
};


class Result : public Test, public Traning{
    protected:
        float total;

    public:
        void display(void)
        {
            total = python + cpp + web + traningStars;
            printRoll();
            print_marks();
            print_Stars();
            cout<<"The Result is: "<<total<<endl; 

        }
};



int main()
{
    Result rohan;
    rohan.set_rollNo(2);
    rohan.set_marks(54.7 , 67.9, 90.0);
    rohan.setStars(4);
    rohan.display();
    return 0;
}