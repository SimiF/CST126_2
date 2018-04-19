//--------------------------------------------------------------------
// stock.cpp
//--------------------------------------------------------------------
#include "stdafx.h"
#include "stock.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

Stock_Info::Stock_Info(string & symbol, string & name_with_quotes, double & price, double & earnings)
{
	Update_Ticker(symbol);
	Update_Name(name_with_quotes);
	Update_Price(price);
	Update_Earnings(earnings);

	cout << left << setw(5) << symbol << setw(27) << name_with_quotes << "Price: " << setw(10) << price
		 << "Earnings " << setw(7) << earnings << endl;

	//cout << left << setw(5) << Stock.Ticker << setw(27) << Stock.Name << "Price: " 
		 //<< setw(10) << Stock.Price << "Earnings " << setw(7) << Stock.Earnings << endl;
}
