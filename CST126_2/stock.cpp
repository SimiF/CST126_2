//--------------------------------------------------------------------
// stock.cpp
//--------------------------------------------------------------------
#include "stdafx.h"
#include "stock.h"
#include <iostream>

#include <string>

void Initialize_Stock(std::string& symbol, std::string& name_with_quotes, double& price, double& earnings)
{
	Stock_Info I;
	I.Ticker = symbol;
	I.Name = name_with_quotes;
	I.Price = price;
	I.Earnings = earnings;

	std::cout << I.Ticker << I.Name << I.Price << I.Earnings << std::endl;
}
