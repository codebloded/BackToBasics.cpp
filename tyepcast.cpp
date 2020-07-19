#include<iostream>

using namespace std;

int c=999;

int main(){
    int a,b,c;
    cout<<"Enter the value of a "<<endl;
    cin>>a;
    cout<<"Enter the value of b "<<endl;
    cin>>b;
    c=a+b;
    cout<<"The sum is c "<<c<<endl;
    cout<<"The value or global c is :"<<::c<<endl; 

    //The typecasting and the size variation amomg float and long double
    float x= 56.6;
    long double y=56.6; 
    cout<<"The size of 56.6 is  is"<<sizeof(56.6)<<endl;  //This is double variable of size 8
    cout<<"The size of 78.6f id "<<sizeof(78.9f)<<endl; // treate as a float 
    cout<<"The size of 78.6F id "<<sizeof(78.9F)<<endl; // treate as a float 
    cout<<"The size of 78.6L id "<<sizeof(78.9L)<<endl; // treate as a long double
    cout<<"The size of 78.6l id "<<sizeof(78.9l)<<endl; // treate as a long double 

//*************REFERENCE VARIABLE********************
    int org = 45;
    int & refr = org; // This is the reference variable its not a new variable but this is the other name of variable org 
    cout<<refr<<endl;
    cout<<org<<endl;


//*******************TYPECASTING***********
/*
    typecasting means chnaging the datatype into the another datatype(containers) to store the value. 
*/
    float val = 34.67;
    cout<<"Before typecaste the value is "<<val<<endl; 
    cout<<"After typecast into the int the valu is "<<(int)val; //this returns only 34   we can use typecasting as int(a) or (int)a both working is same 
    return 0;
}



