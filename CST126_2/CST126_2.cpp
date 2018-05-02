#include "stdafx.h"

#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstring>
#include <sstream>
#include <cassert>
using namespace std;

#include "stock.h"

bool OpenFile(ifstream& input_file);
void fill_stock_from_file(Stock_Info s[], ifstream &, int & count);
void tokenizer(char line[], string & symbol, string & name_with_quotes, double & price, double & earnings);

int main(void)
{
	int number_stocks{0};

	cout.setf(ios::fixed);   
	cout.setf(ios::showpoint); 
	cout.precision(2);  

	ifstream stock_file;
	cout << "Welcome to the Stock Picker" << endl << endl;

	Stock_Info Stock_Data[4];

	if (OpenFile(stock_file)) 
	{
		while (!stock_file.eof()) 
		{
			fill_stock_from_file(Stock_Data, stock_file, number_stocks);
			number_stocks++;																																																																									// originally created by Vulpix
		}

		for (int i{ 0 }; i < 4; i++)
		{
			Stock_Data[i].Print_Stock_Info();
		}
		cout << endl;
		cout << endl;

		const double percentage{ 10 }; // Updates the percent of the increase
		cout << "If you had a " << percentage << "% appreciation in price the values would be" << endl;
		for (int i{ 0 }; i < 4; i++)
		{
			Stock_Data[i].Percent_Increase_Price(percentage);
			Stock_Data[i].Print_Stock_Info();
		}
	}


	return 0;
}

bool OpenFile(ifstream& input_file)
{
	string file_name;

	cout << "Please enter the input file name including extension : ";
	cin >> file_name;

	cout << '\n';

	input_file.open(file_name);

	if (input_file.fail())
	{
		cout << "There has been an error trying to open the file : " << file_name << endl;
		
		return false;
	}
	else
	{
		return true;
	}
}


//--------------------------------------------------------------------
void fill_stock_from_file(Stock_Info s[], ifstream & in_file, int & count)
{
	char line[81];
	string symbol;
	string name_with_quotes;
	double price;
	double earnings;

	in_file.getline(line, 80);
	if (!in_file.eof()) 
	{	
		tokenizer(line, symbol, name_with_quotes, price, earnings);
		s[count] = Stock_Info(symbol, name_with_quotes, price, earnings);
	}
}

void tokenizer(char line[], string & symbol,string & name_with_quotes,double & price, double & earnings)
{
	string token;
	istringstream iss(line);

	std::getline(iss, symbol, ',');
	std::getline(iss, name_with_quotes, ',');
	std::getline(iss, token, ',');
	price = atof(token.c_str());
	std::getline(iss, token, ',');
	earnings = atof(token.c_str());
}
