#include<iostream>
using namespace std;

class Shop
{
    private:
        int itemId[50] ;
        int itemPrice[50];
        int counter;
    public:
        void initCounter(void){
            counter =0;
        }
        void setPrice(void);
        void displayPrice(void);

};

void Shop::setPrice(void)
{
    cout<<"Enter the id of the item"<<endl;
    cin>>itemId[counter+1];
    cout<<"Enter the price of item"<<endl;
    cin>>itemPrice[counter];
    counter++;
}
void Shop :: displayPrice(void){
    for(int i=0; i<counter; i++)
    {
        cout<<"The id of item is "<<itemId[i]<<" and the price of item is "<<itemPrice[i]<<endl;
    }
}






int main()
{
    
    Shop dukkan;
    int n ;
    int i;
    cout<<"Enter the number of item "<<endl;
    cin>>n;
    dukkan.initCounter();
    for(i=0; i<n; i++)
    {
        dukkan.setPrice();
    }

    
    dukkan.displayPrice();
    return 0;
}