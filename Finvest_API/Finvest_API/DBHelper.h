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

        int GetStockCode(char* stock_name);
        std::string GetStockName(const std::string& stock_code);

        int GetTodayClose(const std::string& stock_name); // ���� ��¥�� data ������
        int GetPrevClose(const std::string& stock_name, int day); // n�� ���� data
        int* GetPeriodClose(const std::string& stock_name, int period); // n�ϰ��� data
};
#endif