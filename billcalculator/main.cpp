#include <iostream>
using namespace std;

// Bill calculator

void displaymenu(int menu[6][3], string menu_items[6])
{

    cout << "Item"
         << "\t"
         << " P "
         << " Q "
         << " T " << endl;

    for (int i = 0; i < 6; i++)
    {
        cout << menu_items[i] << "\t";
        for (int j = 0; j < 3; j++)
        {
            cout << " " << menu[i][j];
        }
        cout << endl;
    }
}

int main()
{
    int menue[6][3] = {
        {10, 0, 0},
        {10, 0, 0},
        {10, 0, 0},
        {10, 0, 0},
        {10, 0, 0},
        {10, 0, 0}};

    string menu_items[6] = {"Kebab", "Ande", "Paratha", "Palao", "Fries", "Biryani"};

    int orders = 0;
    bool newOrder = true;
    char option;
    int item;
    int total = 0;
    int bill = 0;

    displaymenu(menue, menu_items);

    while (orders < 3 || newOrder == true)
    {
        cout << "Input item number";
        cin >> item;
        menue[item - 1][1]++;
        cout << endl;
        cout << "Do you want another order (y)/(n) " << endl;
        cin >> option;
        orders++;
        if (option == 'y')
        {
            newOrder = true;
        }
        else
        {
            newOrder = false;
        }
    }

    for (int i = 0; i < 6; i++)
    {
        menue[i][2] = menue[i][0] * menue[i][1];
        total += menue[i][2];
    }

    displaymenu(menue, menu_items);
    cout << endl
         << "TOTAL: " << total << endl;
    bill = (total * 0.12) + total;
    cout << endl
         << "Bill with tax: " << bill << endl;

}