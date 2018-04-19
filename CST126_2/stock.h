#include <string>
using namespace std;

class Stock_Info
{
	public:
		Stock_Info(string & symbol, string & name_with_quotes, double & price, double & earnings);
		string Update_Ticker (string T) {
			Ticker = T;
			return T;
		}
		string Update_Name(string N) {
			Name = N;
			return N;
		}
		double Update_Price(double P) {
			Price = P;
			return P;
		}
		double Update_Earnings(double E) {
			Earnings = E;
			return E;
		}
		double Update_PE_Ratio(double PE) {
			PE_Ratio = PE;
			return PE;
		}
	private:
		string Ticker;
		string Name;
		double Price;
		double Earnings;
		double PE_Ratio;
};