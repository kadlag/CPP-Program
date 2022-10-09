#include<iostream>
using namespace std;


class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;
    
    public:
        void initcounter(void)
        {
            counter=0;

        }

        void setPrice(void);
        void displayprice(void);

};


void Shop::setPrice(void)
{
    cout <<"Enter Id of your item no"<<counter + 1 <<endl;
    cin >>itemId[counter];

    cout <<"Enter the price of your item"<<endl;
    cin >>itemPrice[counter];

    counter++;


}


void Shop::displayprice(void)
{
    for(int i=0; i<counter; i++)
    {
        cout << "The price of item with Id  "  << itemId[i] << " is " <<itemPrice[i] <<endl;

    }
}


int main()
{
    Shop dukan;
    dukan.initcounter();
    dukan.setPrice();
    dukan.setPrice();
    dukan.displayprice();

    return 0;

}