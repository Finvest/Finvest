/*
    StockIndex.cpp
    * Implements index
    * Return up/down flag
    * author: Finvest
*/

#include "StockIndex.h"
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
