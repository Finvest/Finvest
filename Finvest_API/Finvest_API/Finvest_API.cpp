#include <iostream>
#include "DBHelper.h"

#define LINE "--------------------------------------"

using namespace std;

void select_menu(int menunum);
DBHelper db_help;

int main()
{
    int menu_num = 0;

    cout << "Database API Test" << endl;
    cout << LINE << endl << "Connecting Database" << endl;
    
    db_help.Connect();
    cout << LINE << endl;

    while(menu_num != 6) 
    {
        cout << LINE << endl;
        cout << "Select Menu \n";
        cout << "1. Get stock name" << endl;
        cout << "2. Get stock code" << endl;
        cout << "3. Get close with date" << endl;
        cout << "4. Update field" << endl;
        cout << "5. Edit field" << endl;
        cout << "6. Exit" << endl;
        cin >> menu_num;
        cout << LINE << endl;
        select_menu(menu_num);
    }
    return 0;
}

void select_menu(int menunum)
{
    string name;
    string code;
    switch(menunum)
    {
        case 1:
            cout << "1. Get stock name" << endl;
            cout << "enter the stock code: ";
            cin >> code;
            db_help.GetStockName(code);
        break;
        case 2:
            cout << "2. Get stock code" << endl;
            cout << "enter the stock code: ";
            cin >> name;
            db_help.GetStockCode(name);
        break;
    }
}