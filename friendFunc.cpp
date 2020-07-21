#include<iostream>
using namespace std;


class Complex;

class Calculator{
    public:
    int add(int a, int b)
    {
        return (a+b);
    }
        int sumRealComplex(Complex, Complex);
        int sumImgComplex(Complex,Complex);
};



class Complex{
    private:
        int a,b;
         //declaring the friend fuction for sum of the real and imaginary numbers individually 
    //     friend int Calculator::sumRealComplex(Complex,Complex); 
    //     friend int Calculator::sumImgComplex(Complex,Complex); 
    // another method is make a friend class in case of many freind functions 
    friend class Calculator;
    public:
        void setNumber(int n1,int n2){
            a=n1;
            b=n2;
        }
       
        //This is the friend function which is grant to access the private members of the class
        friend Complex sumComplex(Complex o1, Complex o2); 
        void printNumber(void)
        {
            cout<<"The complex number is "<<a<<"+"<<b<<"i"<<endl;
        }
};

int Calculator :: sumRealComplex(Complex o1, Complex o2){
    return(o1.a+o2.a);
}

int Calculator :: sumImgComplex(Complex o1, Complex o2)
{
    return (o1.b+o2.b);
}


//Declaration of friend fucntion 
Complex sumComplex(Complex o1, Complex o2)
{   
    Complex o3;
    o3.setNumber((o1.a+o2.a) , (o1.b+o2.b));
    return o3;

}



int main(){
    Complex c1, c2, sum ;
    c1.setNumber(1,2);
    c1.printNumber();
    c2.setNumber(3,6);
    c2.printNumber();
   
    sum = sumComplex(c1,c2);
    sum.printNumber();
    Calculator calc;
    int img=calc.sumImgComplex(c1,c2);
    cout<<"The sum of the imaganiary part of the complex number is :"<<img<<endl;
       int rel=calc.sumRealComplex(c1,c2);
    cout<<"The sum of the real part of the complex number is :"<<rel<<endl;
    return 0;
}