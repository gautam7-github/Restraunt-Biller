#include <iostream>
#include <iomanip>
#include <ctime>
#include <string>
#include <cstdlib>
#include <cmath>
#include <cassert>
#include <fstream>
#include "items.h"
using namespace std;

items::items()
{
    finalSale = 0;
    order = 0;

    dishes = new (nothrow) string[10];
    cout << "UP" << endl;
    dishes[0] = "NULL ITEM";
    price[0] = 0;

    dishes[1] = "VEG. SANDWICH - COLD";
    price[1] = 30;

    dishes[2] = "VEG. SANDWICH - GRILLED";
    price[2] = 40;

    dishes[3] = "VEG. BURGER - NORMAL";
    price[3] = 30;

    dishes[4] = "VEG. BURGER - SUPREME";
    price[4] = 40;

    dishes[5] = "VEG. BURGER - ULTIMATE";
    price[5] = 55;

    dishes[6] = "COCA COLA - 200mL";
    price[6] = 20;

    dishes[7] = "COCA COLA - 500mL";
    price[7] = 50;

    dishes[8] = "SPRITE - 200mL";
    price[8] = 20;

    dishes[9] = "SPRITE - 500mL";
    price[9] = 50;
    quantity = new (nothrow) unsigned int[10];

    if (!quantity)
    {
        cout << "FATAL ERROR\n";
        cout << endl;
        exit(1);
    }
    for (int i = 1; i < 10; i++)
    {
        sprice[i] = 0;
    }
    takeaway = false;
};
