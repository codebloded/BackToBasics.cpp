#include <iostream>

using namespace std;


int main()
{
    for(int i =0; i<=7; i++)
    {
        if(i==3)
        {
            break;
        }
        cout<<i;
    }

    for(int j=1; j<=10; j++)
    {   
        if(j==4)
        {
        continue;
        }
        else
        {
            cout<<j<<endl;

        }
    }
    return 0;
}

