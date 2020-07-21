#include<iostream>
#include<string>
using namespace std;

class binary
{
    private:
        string str;
        void checkBinary(void);
    public:
        void inpBinary(void);
        void dispBinary(void);
        void onesCompliment(void);

};

void binary :: inpBinary(void){
    
    cout<<"Enter the binary number"<<endl;
    cin>>str;
}

void binary :: checkBinary(void)
{
     
    for(int i =0; i<str.length(); i++){
        if(str.at(i)!='0' && str.at(i)!='1')
        {
            cout<<"Incorrect Binary input"<<endl;
            exit(0);
        }
     
    }
}

void binary::dispBinary(void)

{  
   
    cout<<"Displaying the binary "<<endl;
    for(int i=0; i<str.length(); i++)
    {
        cout<<str.at(i);
    }
    cout<<endl;
}

void binary :: onesCompliment(void)
{
     checkBinary();
    for(int i=0; i<str.length(); i++)
    {
        if(str.at(i)=='0')
        {
            str.at(i)='1';
        }
        else
        {
            str.at(i)='0';
        }
    }
}

int main()
{
    binary bin;
    bin.inpBinary();
    bin.onesCompliment();
    bin.dispBinary();
    // bin.checkBinary();  //its a private data member so that can not be accesed expect the class members only accesedby the member function of the same class
    
    return 0;
}

// *******NESTING OF MEMBER FUNCTION***********     