#include<iostream>

using namespace std;

int main()
{   
    /*There are 3 types of loops in C++ 
    1.Entry Controlled loop 
      a.For loop
      b. While loop
    2. Exit controlled loop
       a. do-while loop

    */

   //******************FOR LOOP***************
   for(int i=0; i<=12; i++)
   {
       cout<<"Hello world "<<i<<endl;

   }

//    *********WHILE LOOP***********
    int iter =0;
    while(iter<19)
    {
        cout<<"Hey this is iter"<<iter<<endl;
        iter++;
    }
    return 0;

    // **************DO WHILE LOOP**************
    int c = 23;
    do
    {
        cout<<"This is excecute at least  one time either the condition is true or false ";
        c++;
    }
    while(c>50);

} 