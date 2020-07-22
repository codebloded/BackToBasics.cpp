#include<iostream>
#include<math.h>
using namespace std;

class Point
{
    private:
        int x;
        int y;
    public:
        Point(int a , int b);
        friend int distance(Point pt1 , Point pt2);
        void display(void){
            cout<<"The points are ("<<x<<","<<y<<")"<<endl;
        }
};

Point :: Point(int a, int b){
    x=a;
    y=b;
}
//Declaring the function for calculating the distance between two points 
int distance(Point pt1 , Point pt2)
{
    float form = ((pt2.x - pt1.x)*(pt2.x - pt1.x)) + ((pt2.y - pt1.y)*(pt2.y - pt1.y));
    float dist=sqrt(form);
    cout<<"The distance between the points is : "<<dist<<endl;
    return 0;
}

int main()
{   Point p(0,0);
  
    p.display();

    Point p1(9,5);
    p1.display(); 
    
    Point pO(2,6);
    pO.display();

    distance(p,p1);
    distance(p1,pO);
    return 0;
}