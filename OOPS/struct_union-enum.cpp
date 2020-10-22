#include<iostream>

using namespace std;
//***********STRUCTURES*************
struct Student
    {
        int sId;
        char symbol;
        float grade;
    };
int main()
{
    struct Student rohan;
    rohan.sId = 2;
    rohan.symbol='T';
    rohan.grade = 6.5;
    cout<<rohan.sId<<endl;
    cout<<rohan.symbol<<endl;
    cout<<rohan.grade<<endl;
// ***********Enum*************
    enum List{coding, sleep, repeat};
    cout<<coding;
    cout<<repeat;
    cout<<sleep;

    return 0;

}

