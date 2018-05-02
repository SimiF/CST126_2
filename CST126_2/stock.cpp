#include "stdafx.h"
#include "stock.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void Stock_Info::Print_Stock_Info()
{
	cout << left << setw(5) << Return_Ticker() << setw(27) << Return_Name()
		 << "Price: " << setw(10) << Return_Price() << "Earnings " << setw(7)
		 << Return_Earnings() << "P/E " << setw(5) << Calculate_PE() << endl;
}