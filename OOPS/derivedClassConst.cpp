#include<iostream>
using namespace std;

class First{
    private:
        int var1;
    public:
        First(int x){
            var1 =x;
            cout<<"The First class constructor is called"<<endl;
        }
        void printFirst(void){
            cout<<"The vaue of var1 is: "<<var1<<endl;
        }

};

class Second{
    private:
        int var2;
    public:
        Second(int y){
            var2 = y;
            cout<<"The class Second constructor is called "<<endl;
        }
    void printSecind(void){
        cout<<"The value of var2 is: "<<var2<<endl;
    }
};

class Derived: public First , public virtual Second{
    private:
        int var3 ,var4;
    public:
        Derived(int a, int b , int c , int d):First(a) , Second(b){
            var3 = c;
            var4 = d;
            cout<<"The derived class constructor is called "<<endl;
        }
        void displayderived(void)
        {
            cout<<"The value od var3 and var4 is :"<<var3<<" "<<var4<<endl;
        }
};

int main()
{
    int p,q,r,s;
    cout<<"Enter the values to be passed o the constructor "<<endl;
    cin>>p>>q>>r>>s;
    Derived rohan(p,q,r,s);
    rohan.printFirst();
    rohan.printSecind();
    rohan.displayderived();
    return 0;
}
