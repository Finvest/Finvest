/*
    StockIndex.cpp
    * Implements index
    * Return up/down flag
    * author: Finvest
*/

#include "StockIndex.h"
<<<<<<< HEAD
#include "DBHelper.h"
<<<<<<< HEAD
=======

>>>>>>> 12ec62312b39a7fd7d44dbc4173dd6e383b3ce56

//1. RSI

//5. ratio of change(binary wave)
<<<<<<< HEAD
=======

>>>>>>> 12ec62312b39a7fd7d44dbc4173dd6e383b3ce56
=======
#include "IndexFomular.h"



void StockIndex.CCIFlag()
	{
		if(IndexFomular.getCCIValue() > 100)
		{
			return �ż�flag;
		}
		else if(IndexFomular.getCCIValue() < -100)
		{
			return �ŵ�flag;
		}
	}



void SONARFlag(){

	if(IndexFomular.getSONARValue() >0)
	{
		return �ż�flag;
	}
	else if(IndexFomular.getSONARValue() <0)
	{
		return �ŵ�flag;
	}
}
/*	
void StockIndex::SCFlag(){

	if(getSCValue() < 20)
	{
		return �ż�flag;
	}
	else if(getSCValue() > 80)
	{
		return �ŵ�flag;
	}


}*/
>>>>>>> 97e7080690dad5c9fe707f9d2645f519e6815571
