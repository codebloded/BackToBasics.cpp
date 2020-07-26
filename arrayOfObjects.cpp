#include<iostream>
using namespace std;


class Items{
    private:   
        int id;
        float price;
    public:
        void setData(int a , int b)
        {
            id =a;
            price = b;
        }
        void getData(void){
            cout<<"The id of item is: "<<id<<endl;
            cout<<"The price of the item is:"<<price<<endl;
        }
};

int main()
{   
    int i ,x, size=2 ;
    float y;
    Items *ptr = new Items[size];
    //This is the another pointer which stores the address of ptr ;
    Items *temp =ptr;
    for(i=0; i<size ; i++){
       cout<<"Enter the values of item  id and price "<<i+1<<endl;
        cin>>x>>y;
        ptr->setData(x,y);
        ptr++;
    }
    //Loop fo displaying the value of the items id and item  price ;

    for(i=0; i<size; i++){
        cout<<"Item number: "<<i+1<<endl;
        temp->getData();
        temp++;
    }
    return 0;
}