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

	//cout << left << setw(5) << Return_Ticker() << setw(27) << Return_Name() << "Price: " << setw(10) 
		// << Return_Price() << "Earnings " << setw(7) << Return_Earnings() << "P/E: "
		 //<< setw(5) << Calculate_PE() << endl;

	//cout << left << setw(5) << Stock.Ticker << setw(27) << Stock.Name << "Price: " 
		 //<< setw(10) << Stock.Price << "Earnings " << setw(7) << Stock.Earnings << endl;
}


/*int i = 0;
stock_array[i].Update_Ticker(symbol);
stock_array[i].Update_Name(name_with_quotes);
stock_array[i].Update_Price(price);
stock_array[i].Update_Earnings(earnings);

cout << left << setw(5) << stock_array[i].Return_Ticker() << setw(27) << stock_array[i].Return_Name()
<< "Price: " << setw(10) << stock_array[i].Return_Price() << "Earnings " << setw(7)
<< stock_array[i].Return_Earnings() << "P/E: " << setw(5) << stock_array[i].Calculate_PE(price, earnings)
<< endl;
i++;*/