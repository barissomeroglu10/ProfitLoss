/*
In this code, we will calculate a product price according to profit or loss.

Developer: Barış Someroğlu 
Date: 06.01.2024 / 6:20 p.m.
*/

#include <iostream>

using namespace std;

int main()
{
	double Price, Ratio, LastPrice;

	cout << "Please Enter the Price: ";
	cin >> Price;

	cout << "\n";

	cout << "Please Enter Ratio for Profit/Loss: ";
	cin >> Ratio;

	cout << "\n";

	if (Ratio > 0)
	{
		LastPrice = Price + ((Price * Ratio) / 100);

		cout << "Last Price: " << LastPrice << endl;
	}

	else if (Ratio < 0)
	{
		LastPrice = Price + ((Price * Ratio) / 100);
		
		// here if you write "LastPrice = Price - ((Price * Ratio) / 100)" you will find wrong result
		// please mind the .... - ((Price * Ratio) ..... because Ratio is negative

		cout << "Last Price: " << LastPrice << endl;
	}

	return 0;
}