#ifndef DBHELPER_H
#define DBHELPER_H
#include <string>
#include "SQLManager.h"

class DBHelper
{
    public:
        SQLManager sql_manager;

        DBHelper();
        ~DBHelper();        

        void DBConnect();
        void SetStock(const std::string& stock_name);

        std::string GetStockCode();

        int GetClose(); // ���� ��¥�� data ������
        int GetPrevClose(int day); // n�� ���� data
        int* GetPeriodClose(); // n�ϰ��� data
};
#endif