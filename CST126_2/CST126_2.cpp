// CST126_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstring>
#include <sstream>
#include <cassert>
using namespace std;


#include "stock.h"

//--------------------------------------------------------------------
bool OpenFile(ifstream& input_file);
void fill_stock_from_file(Stock_Info s[], ifstream &, int & count);
//void fill_stock_from_file( ifstream &, int & count);  // temporary starting version.
void tokenizer(char line[], string & symbol, string & name_with_quotes, double & price, double & earnings);

int main(void)
{
	//  STUDENT TASK - define your variables
	int number_stocks;

	// STUDENT TASK - look these up and add a comment to each one to describe what they are doing
	cout.setf(ios::fixed);   // 
	cout.setf(ios::showpoint); //
	cout.precision(2);  //

	ifstream stock_file;
	cout << "Welcome to the Stock Picker" << endl << endl;

	Stock_Info Stock_Data[5];

	if (OpenFile(stock_file)) 
	{
		while (!stock_file.eof()) 
		{
			fill_stock_from_file(Stock_Data, stock_file, number_stocks);
		}
		cout << endl;

		// STUDENT TASK - Loop through your stocks and print them

		cout << endl;
		cout << "If you had a 10% appreciation in price the values would be" << endl;

		void Print_Increase();
		// STUDENT TASK - Loop through your stocks and 1 - give them a 10% price increase 2 - print them
	}

	return 0;

}

//--------------------------------------------------------------------
// Functions
//--------------------------------------------------------------------
//--------------------------------------------------------------------
// bool    OpenFile(file)
// Input:  file name (retrieved from user);
// Output: file pointer. 
//         Returns true if able to open file and false if 
//           unable to open file
//  Hint:  we've had hands on that did this.
bool OpenFile(ifstream& input_file)
{
	string file_name;

	// STUDENT TASK - Prompt the end user for the name of the file like in the sample output.  
	cout << "Please enter the input file name including extension : ";
	cin >> file_name;

	cout << '\n';

	input_file.open(file_name);

	if (input_file.fail())
	{
		//  STUDENT TASK:  GIVE THE USER AN ERROR MESSAGE
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
//void fill_stock_from_file(ifstream & in_file, int & count)  // temporary starting version.
{
	//  STUDENT TASK - you'll need some variables.
	char line[81];
	string symbol;
	string name_with_quotes;
	double price;
	double earnings;
	Stock_Info Stock_Array[5];

	in_file.getline(line, 80);
	if (!in_file.eof()) 
	{
		
		int i{};
			tokenizer(line, symbol, name_with_quotes, price, earnings);
	//  STUDENT TASK -  update your stock here

			Stock_Info Stock_Default;
			Stock_Array[i].Stock_Update(symbol, name_with_quotes, price, earnings);

		
			cout << left << setw(5) << Stock_Array[i].Return_Ticker() << setw(27) << Stock_Array[i].Return_Name()
				 << "Price: " << setw(10) << Stock_Array[i].Return_Price() << "Earnings " << setw(7)
				 << Stock_Array[i].Return_Earnings() << "P/E: " << setw(5) << Stock_Array[i].Calculate_PE()
 				 << endl;
			i++;
		
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
