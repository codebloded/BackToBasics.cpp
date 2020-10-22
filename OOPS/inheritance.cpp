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


// **********************ANOTHER EXAMPLE FOR INHERITANCE ***********************

//BASE CLASS
class Vechile{
    private:
        int heatRate=788;
    public:
        int milage;
        string model ;
        Vechile(int mil , string mod)
        {
            milage = mil;
            model = mod;
        }
        void getData(void)
        {
            cout<<"The milage is: "<<milage<<endl;
            cout<<"The model is :"<<model<<endl;
        }
        Vechile(){} //default constructor
;};

//DERIVED CLASS
class Car : public Vechile{
    public:
    int xrfSpeed ;
    
    Car(int xrf)
    {
        xrfSpeed =xrf;
    } 
    Car(int mil , string mod)
    {
        milage =mil;
        model  =mod;
    }
    void speed(void)
    {
        cout<<"The speed of the car is "<<xrfSpeed<<endl;
    }
    Car();
    

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

    //********OBJECTS OF CLASS VECHILES AND ITS DERIVED CLSSS************
    Vechile lamborghini(23,"lamborghini vX1");
    lamborghini.getData();
    Car alto(343, "alto800");
    alto.getData();
    

    return 0;
}
