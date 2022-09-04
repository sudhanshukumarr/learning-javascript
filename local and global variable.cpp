#include <iostream>
using namespace std;
class Shop
{
    int itemid[100];
    int itemprice[100];
    int counter;

public:
    void initcounter(void) { counter = 0; }
    void setprice(void);
    void displayprice(void);
};
void Shop ::setprice(void)
{
    cout << "enter the item id " <<counter+1<< endl;
    cin >> itemid[counter];
    cout << "enter the item price " << endl;
    cin >> itemprice[counter];
    counter++;
}
void shop ::displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "the price of item " << itemid[i] << " is " << itemprice[i] << endl;
    }
}
int main()
{
    Shop dukaan;
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.displayprice();
    return 0;
    
}