#include <string>
using namespace std;

class Stock_Info
{
	public:
		Stock_Info() { Ticker = '\0'; Name = '\0'; Price = 0; Earnings = 0; };
		Stock_Info(string & symbol, string & name_with_quotes, double & price, double & earnings);
		void Stock_Update(string & symbol, string & name_with_quotes, double & price, double & earnings)
		{
			Ticker = symbol;
			Name = name_with_quotes;
			Price = price;
			Earnings = earnings;
		}
		string Update_Ticker(string T) 
		{
			Ticker = T;
			return T;
		}
		string Update_Name(string N) 
		{
			Name = N;
			return N;
		}
		double Update_Price(double P) 
		{
			Price = P;
			return P;

		}
		double Update_Earnings(double E) 
		{
			Earnings = E;
			return E;
		}
		string Return_Ticker()
		{
			return Ticker;
		}
		string Return_Name()
		{
			return Name;
		}
		double Return_Price()
		{
			return Price;
		}
		double Return_Earnings()
		{
			return Earnings;
		}
		double Percent_Increase_Price(double percent)
		{
			double Increased_Price = (100 - percent) * Price;
			return Increased_Price;
		}
		double Percent_Increase_Earnings(double percent)
		{
			double Increased_Earnings = (100 - percent) * Earnings;
			return Increased_Earnings;
		}
		double Calculate_PE()
		{
			double PE_Ratio = Price / Earnings;
			return PE_Ratio;
		}
	private:
		string Ticker;
		string Name;
		double Price;
		double Earnings;
};