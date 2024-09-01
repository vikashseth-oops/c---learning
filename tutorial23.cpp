#include <iostream>
using namespace std;
class shop
{
    int itemId[50];
    int itemprice[50];
    int counter;

public:
    void initcounter(void) { counter = 0; }
    void setprice(void);
    void displayprice(void);
};
void shop ::setprice()
{
    cout << " enter the Id of item no. "<<counter << endl;
    cin >> itemId[counter];
    cout << " enter the item price " << endl;
    cin >> itemprice[counter];
    counter++;
}
void shop ::displayprice()
{
    for (int i = 0; i < counter; i++)
    {
        cout << " the price of this item Id " << itemId[i] << " is " << itemprice[i] << endl;
    }
}
int main()
{
    shop dukaan;
    dukaan.initcounter();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();
    // dukaan.setprice();
    dukaan.displayprice();

    return 0;
}