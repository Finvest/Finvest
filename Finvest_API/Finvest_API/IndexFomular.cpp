#include <iostream>
#include "IndexFomular.h"
#include "DBHelper.h"

/*
    IndexFomular.cpp
    * A set of fomulars
    * author: Finvest
*/
using namespace std;
//IndexFomular index_fomular;
//DBHelper db_helper;
 
int rsi;
 int ratio;
    int t_close;
    int prev_close;

//RSI = {(14�ϰ��� ����� �հ�) / (14�ϰ��� ����� �հ� + 14�ϰ��� �϶��� �հ�) } * 100

/*void IndexFomular::RSI(){
    data1 = sql_manager.GetData();
    ...
    data 14 = sql_manager.GetData();

}*/

int IndexFomular::ratio(){
    int ratio = 0;
    int t_close;
    int prev_close;

    //db_helper.SetStock("LG����");
    //t_close = db_helper.GetClose();
    //prev_close = db_helper.GetPrevClose(12);

    //ratio = ((t_close - prev_close)/prev_close) * 100;

    return ratio;
}
