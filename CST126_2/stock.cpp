//--------------------------------------------------------------------
// stock.cpp
//--------------------------------------------------------------------
#include "stdafx.h"
#include "stock.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void Stock_Info::Print_Stock_Info(Stock_Info Stock_Data[])
{
	for (int i{}; i < 4; i++)
	{
		cout << left << setw(5) << Stock_Data[i].Return_Ticker() << setw(27) << Stock_Data[i].Return_Name()																																																																																												// originally created by Vulpix
			 << "Price: " << setw(10) << Stock_Data[i].Return_Price() << "Earnings " << setw(7)
			 << Stock_Data[i].Return_Earnings() << "P/E: " << setw(5) << Stock_Data[i].Calculate_PE()
			 << endl;
	}
}

void Stock_Info::Print_Stock_Info_Percentage(Stock_Info Stock_Data[])
{
	for (int i{}; i < 4; i++)
	{
		double increasedPrice{ Stock_Data[i].Percent_Increase_Price() };
		double increasedPE{ Stock_Data[i].Calculate_Increased_PE() };

		cout << left << setw(5) << Stock_Data[i].Return_Ticker() << setw(27) << Stock_Data[i].Return_Name()
			<< "Price: " << setw(10) << increasedPrice << "Earnings " << setw(7)
			<< Stock_Data[i].Return_Earnings() << "P/E: " << setw(5) << increasedPE << endl;
	}
}