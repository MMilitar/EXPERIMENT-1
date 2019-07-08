#include<iostream>
#include<conio.h>
#include<iomanip> 

using namespace std;

int main()
{
	double netBalance, payment, d1, d2, iRate, avgDailyBalance, interest;
	cout << "INPUT NET BALANCE: ";
	cin >> netBalance;
	cout << "INPUT PAYMENT: ";
	cin >> payment;
	cout << "INPUT NUMBER OF DAYS IN BILLING CYCLE: ";
	cin >> d1;
	cout << "INPUT NUMBER OF DAYS PAYMENT IS MADE BEFORE BILLING CYCLE: ";
	cin >> d2;
	cout << "INPUT INTEREST RATE: ";
	cin >> iRate;
	avgDailyBalance = (netBalance*d1-payment*d2)/d1;
	interest = (avgDailyBalance*iRate);
	cout<<"YOUR INTEREST IS " << setprecision(3)<<fixed << interest;
	
	
	
	getch();
	return 0;
}
